/*
 * File: tweet_validator.c
 * Auth: Abdulsamad.
 */

#include <stdio.h>
#include <string.h>


/**
 * main - Entry Point
 *
 * Return: Always 0(Success).
 */

int main(void)
{
	char tweet_post[281];
	int i, j, tweet_len, url_result;

	printf("Enter Tweet: What is on your mind: ");
	scanf("%280[^\n]", tweet_post);
	tweet_len = strlen(tweet_post);


	if (tweet_len > 280)
	{
		printf("Invalid tweet \"Tweet must not exceed 280 characters\"\n");
		return (1);
	}

        const char invalid_chars[] = {'\t','\n', '[', ']', '{', '}','"', '`', '&', '*',
                ':', ';', '/', '\\'};

        for (i = 0; i < tweet_len; i++)
        {
		int len_invalid_chars = sizeof(invalid_chars) / sizeof(invalid_chars[0]);
                for (j = 0; j < len_invalid_chars; j++)
                {
                        if (tweet_post[i] == invalid_chars[j])
                        {
                                printf("Invalid tweet \"Contains invalid Character\"\n");
                                return (1);
                        }
                }
        }

	if (strchr(tweet_post, '@') != NULL)
	{
		printf("Invalid Tweet \"No @ mentions\"\n");
		return (1);
	}

	url_result = strstr(tweet_post, "http://") || strstr(tweet_post, "https://");
	if (url_result)
	{
		printf("Invalid Tweet \"URLs are not allowed\"\n");
		return (1);
	}

	printf("Valid Tweet!\n");
	return (0);
}
