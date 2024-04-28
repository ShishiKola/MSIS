import base64

# Base64-encoded string
base64_encoded = "U2Fs"

# Decode the Base64-encoded string
decoded_bytes = base64.b64decode(base64_encoded)

# Convert bytes back to string
original_string = decoded_bytes.decode()

print(original_string)  
