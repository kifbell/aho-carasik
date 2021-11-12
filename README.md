# aho-carasik

The match task.<br/>
Question marks -- "?" -- is expected to match all the letters. 

Solution:<br/>
If the costructor finds pattern "w?v", where w v a re some strings, it is to add all the suffixes of "w?" to the patterns and only after that will duild a trie.

To cite an example: { "i", "in", "tin", "sting", "st?ng"} will lead to a new tuple of patterns.<br/>
The new pattern is  { "i", "in", "tin", "sting", "st?ng", "st?", "t?", "?"}.
