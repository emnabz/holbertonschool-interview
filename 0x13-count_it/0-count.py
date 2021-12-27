#!/usr/bin/python3
""" a recursive function that queries the Reddit API, parses the title of all
hot articles, and prints a sorted count of given keywords
(case-insensitive, delimited by spaces. Javascript should count as
javascript, but java should not)."""
import requests
from uuid import uuid4

def count_words(subreddit, word_list):
    """ [Summary] """
    headers = requests.utils.default_headers()
    headers.update(
        {
            'User-Agent': uuid4(),
        }
    )
    subs = requests.get('https://www.reddit.com/r/{}/hot.json'.
                        format(subreddit), headers=headers)
    print(subs.json())