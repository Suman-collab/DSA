import requests

def query_gemini(query):
  """Sends a query to Gemini and returns the response."""

  # Replace 'YOUR_API_KEY' with your actual Gemini API key
  api_key = 'YOUR_API_KEY'
  url = 'https://api.gemini.com/v1/generate'
  headers = {'Authorization': f'Bearer {api_key}'}
  data = {'prompt': query}

  response = requests.post(url, headers=headers, json=data)
  response.raise_for_status()  # Raise an exception for error HTTP statuses
  return response.json()['generation']

if __name__ == '__main__':
  while True:
    user_query = input("Enter your query: ")
    if user_query.lower() == 'exit':
      break
    response = query_gemini(user_query)
    print(response)