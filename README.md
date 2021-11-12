# aho-carasik

The match task.
Question marks -- "?" -- is expected to match all the letters. 

Solution: 
If the costructor finds pattern "w?v", where w v a re some strings, it is to add all the suffixes of "w?" to the patterns and only after that will duild a trie.

To cite an example, { "i", "in", "tin", "sting", "st?ng"} will lead to new pattern tuple, anmly { "i", "in", "tin", "sting", "st?ng", "st?", "t?", "?"}.
