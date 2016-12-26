# Fixed twitter script
import tweepy

# Consumer keys and access tokens, used for OAuth
consumer_key = 'k16Mu64PQbDP7scV77x7gAj91'
consumer_secret = 'dbP9TSCRWRNonw8CmMRiotkoY5RR8QkeirsrJdl4Y6LZYMuZUr'
access_token = '785888278666813440-ERjkfXZXXeu1vzy8HuXc0Nc4E1bKeMI'
access_token_secret = 'FosmxFb3QxCLDr4rsKX0LPYrjTh6bq6XU93147eHOQHps'

# OAuth process, using the keys and tokens
auth = tweepy.OAuthHandler(consumer_key, consumer_secret)
auth.set_access_token(access_token, access_token_secret)

# Creation of the actual interface, using authentication
api = tweepy.API(auth)

# Sample method, used to update a status
api.update_status('Good Morning!')
