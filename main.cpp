
#include "ahocorasick.h"

void test1()
{
	std::vector<std::string> patterns = { "i", "in", "tin", "sting", "st?ng", "st?", "t?", "?" };

	AhoCorasickTrie myTrie(patterns);

	myTrie.find("stong");
}

void test2()
{
	std::vector<std::string> patterns = { "it", "int", "kind", "akin" };

	AhoCorasickTrie myTrie(patterns);

	myTrie.find("akit");
}

void testKolya()
{
    std::vector<std::string> patterns = { "he", "his", "hers", "she" };

    AhoCorasickTrie myTrie(patterns);

    myTrie.find("");
}

int main()
{
	test1();

	return 0;
}