import tweepy

CONSUMER_KEY = "k16Mu64PQbDP7scV77x7gAj91"
CONSUMER_SECRET = "dbP9TSCRWRNonw8CmMRiotkoY5RR8QkeirsrJdl4Y6LZYMuZUr"
ACCESS_KEY = "785888278666813440-ERjkfXZXXeu1vzy8HuXc0Nc4E1bKeMI"
ACCESS_SECRET = "FosmxFb3QxCLDr4rsKX0LPYrjTh6bq6XU93147eHOQHps"

auth = tweepy.OAuthHandler(CONSUMER_KEY, CONSUMER_SECRET)
auth.set_access_token(ACCESS_KEY, ACCESS_SECRET)

api = tweepy.API(auth)
api.update_status('Good Morning!')
