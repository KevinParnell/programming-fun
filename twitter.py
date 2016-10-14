import tweepy

def get_api(cfg):
  auth = tweepy.OAuthHandler(cfg['k16Mu64PQbDP7scV77x7gAj91'], cfg['dbP9TSCRWRNonw8CmMRiotkoY5RR8QkeirsrJdl4Y6LZYMuZUr'])
  auth.set_access_token(cfg['785888278666813440-ERjkfXZXXeu1vzy8HuXc0Nc4E1bKeMI'], cfg['FosmxFb3QxCLDr4rsKX0LPYrjTh6bq6XU93147eHOQHps'])
  return tweepy.API(auth)

def main():
  # Fill in the values noted in previous step here
  cfg = {
    "consumer_key"        : "k16Mu64PQbDP7scV77x7gAj91",
    "consumer_secret"     : "dbP9TSCRWRNonw8CmMRiotkoY5RR8QkeirsrJdl4Y6LZYMuZUr",
    "access_token"        : "785888278666813440-ERjkfXZXXeu1vzy8HuXc0Nc4E1bKeMI",
    "access_token_secret" : "FosmxFb3QxCLDr4rsKX0LPYrjTh6bq6XU93147eHOQHps"
    }

  api = get_api(cfg)
  tweet = "Good Afternoon!"
  status = api.update_status(status=tweet)
  # Yes, tweet is called 'status' rather confusing

if __name__ == "__main__":
  main()
