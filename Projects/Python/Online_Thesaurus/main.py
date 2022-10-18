import urllib.request, urllib.parse, urllib.error
import json
import ssl

# api_key = False
# If you have a Google Places API key, enter it here
api_key = 'fTp7V2Rjn89EFsl9emUP'
# https://developers.google.com/maps/documentation/geocoding/intro

if api_key is False:
    api_key = 42
    serviceurl = 'http://py4e-data.dr-chuck.net/json?'
else :
    serviceurl = 'http://thesaurus.altervista.org/thesaurus/v1?'

# Ignore SSL certificate errors
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

while True:
    address = input('\nEnter word to search: ')
    if len(address) < 1:
        break
    language = 'en_US'
    output = 'json'
    parms = dict()
    parms['word'] = address
    parms['language'] = language
    parms['output'] = output
    if api_key is not False: parms['key'] = api_key
    url = serviceurl + urllib.parse.urlencode(parms)

    print('\t\t*Searching\n\n')
    uh = urllib.request.urlopen(url, context=ctx)
    data = uh.read().decode()
    # print('Retrieved', len(data), 'characters')

    try:
        js = json.loads(data)
    except:
        js = None
    print("Synonyms:\n")
    for lst in js["response"]:
        print(lst["list"]["synonyms"])
    print("\n")

print("\t\t\t************************************\n")
print("\t\t\t* Program terminated successfully. *\n")
print("\t\t\t************************************\n")
