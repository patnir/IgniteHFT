# -*- coding: utf-8 -*-
"""
Created on Tue Nov 15 13:44:08 2016

@author: Rahul Patni
"""

import urllib
import os

BASE_URL = "http://ichart.finance.yahoo.com/table.csv?s="
def make_url(ticker_symbol):
    """build url to pull stock data from"""
    url = BASE_URL + ticker_symbol
    return url

def make_filename(ticker_symbol, directory="S&P"):
    """build the file name for each stock.
    If the stock folder does not exist create it"""
    if not os.path.exists(directory):
        os.makedirs(directory)
    file_name = directory + "/" + ticker_symbol + ".csv"
    return file_name

def pull_historical_data(ticker_symbol, directory="S&P"):
    """collect the data"""
    try:
        urllib.urlretrieve(make_url(ticker_symbol), make_filename(ticker_symbol, directory))
    except urllib.ContentTooShortError as e:
        outfile = open(make_filename(ticker_symbol, directory), "w")
        outfile.write(e.content)
        outfile.close()
    except:
        pass

if __name__ == "__main__":
    with open('S&P-500-symbols.txt') as f:
        stocks = f.readlines()
    for stock in stocks:
        stock = stock.rstrip()
        print stock
        pull_historical_data(stock)