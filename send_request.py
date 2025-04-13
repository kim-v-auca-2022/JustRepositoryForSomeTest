#!/usr/bin/env python3
import requests

# Converting code into json package
f = open("problem01.cpp", "r")      # change to specific file path later
file_string = f.read()
cpp_code = """""" + file_string

data = {
        "model_name": "deepseek-r1:7b",
        "code": cpp_code
        }

# Sending HTTP request to server
response = requests.post("http://auca.space:5555/submit", json=data)
print(response.json())
