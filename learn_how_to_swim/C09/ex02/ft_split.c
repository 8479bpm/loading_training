#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

int is_separator(char c){
	if(c == ' ' || c == '\t' || c ==  '\n' || c == '\0')
		return 1;
	return 0;
}
char	*extract_one_word(char *str){
	if(!str){
		return NULL;
	}
	int str_len = ft_strlen(str);
	char *word = malloc(str_len * sizeof(char));
	int i = 0;
	while(is_separator(str[i]) == 0){
		word[i] = str[i];
		i+= 1;
	}
	word[i] = '\0';
	return word;
}

char    **ft_split(char *str){
	if(!str){
		return NULL;
	}
	// get len of str 
	int  str_len = ft_strlen(str);
	// empty string case
	if(str_len == 0){
		return NULL;
	}
	// allocate array of words 
	char ** result = malloc(sizeof(char*) * str_len + 1);

	int i = 0;
	while(i < str_len + 1){
		result[i] = NULL;
		i += 1;
	}

	i=0;
	int nb_word = 0;
	while(i < str_len){
		char * word = extract_one_word(str + i); // start extraction after the last word we met
		result[nb_word] = word;
		nb_word += 1;
		int word_len = ft_strlen(word);
		i = i + word_len + 1;
	}
	return result;
}

void test_split(char *s){
	char ** words = ft_split(s);
	if(!words){
		printf("returned null\n");
		printf("*************************************\n");
		return;
	}
	char * w = words[0];
	int i = 0;
	while(w){
		printf("'%s' \n", w);
		i+= 1;
		w = words[i];
	}
	printf("*************************************\n");
}

int main(){
	test_split("");
	test_split(" ");
	test_split("salut");
	test_split("wes les jeunes");
	test_split("salam\talikoum\n");
	test_split("hello            my         people     ");
	test_split("                          ");
	test_split("                  \t\n     ");
}