import json
import csv

amzn = {}

fieldNames = ("Date", "Open", "High", "Low", "Close", "Volume", "Adj Close");

amzn_csv  = open('S&P/AMZN.csv', 'r')
amzn_json = open('AMZN.json', 'w')

reader = csv.DictReader(amzn_csv, fieldNames)
amzn_json.write('[')
for row in reader:
    json.dump(row, amzn_json)
    amzn_json.write(',\n')

amzn_json.write(']')
