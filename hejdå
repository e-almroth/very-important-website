# app.py
from flask import Flask, request, jsonify
import asyncio
import your_script  # Replace 'your_script' with the name of your Python script file

app = Flask(__name__)  # Corrected here

@app.route('/interview', methods=['POST'])
def interview():
    # Extract data from request
    data = request.json
    username = data.get('username')
    password = data.get('password')

    # Run your interview logic here, you might need to adjust it to work in this context
    loop = asyncio.new_event_loop()
    asyncio.set_event_loop(loop)
    result = loop.run_until_complete(your_script.main(username, password))
    return jsonify(result)

if __name__ == '__main__':  # Corrected here
    app.run(debug=True)
