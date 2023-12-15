int mystrcmp(const char* str1, const char* str2) {
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] > str2[i]) {
			return 1;
		}
		else if (str1[i] < str2[i]) {
			return -1;
		}
		i++;
	}
	if (str1[i] == '\0' && str2[i] == '\0') {
		return 0;
	}
	else if (str1[i] == '\0') {
		return -1;
	}
	else {
		return 1;
	}
};/* — ôóíêö³ÿ ïîğ³âíşº äâà ğÿäêè ³, ÿêùî ğÿäêè ğ³âí³, ïîâåğòàº 0, ÿêùî ïåğøèé ğÿäîê á³ëüøèé çà äğóãèé, òî ïîâåğòàº 1, â ³íøîìó ğàç³ — 1.*/
int StringToNumber(char* str) {
	int i = 0;
	int number = 0;
	while (str[i] != '\0') {
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return number;
}; /*— ôóíêö³ÿ êîíâåğòóº ğÿäîê ó ÷èñëî ³ ïîâåğòàº öå ÷èñëî.*/
char* NumberToString(int number) {
	int i = 0;
	int j = 0;
	int temp = number;
	char* str = new char[10];
	while (temp != 0) {
		temp /= 10;
		i++;
	}
	while (number != 0) {
		str[i - j - 1] = number % 10 + '0';
		number /= 10;
		j++;
	}
	str[i] = '\0';
	return str;
}; /*— ôóíêö³ÿ êîíâåğòóº ÷èñëî â ğÿäîê ³ ïîâåğòàº ïîêàæ÷èê íà öåé ğÿäîê.*/
char* Uppercase(char* str1) {
	int i = 0;
	while (str1[i] != '\0') {
		if (str1[i] >= 'a' && str1[i] <= 'z') {
			str1[i] -= 32;
		}
		i++;
	}
	return str1;
}; /* — ôóíêö³ÿ ïåğåòâîğşº ğÿäîê ó âåğõí³é ğåã³ñòğ.*/
char* Lowercase(char* str1) {
	int i = 0;
	while (str1[i] != '\0') {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] += 32;
		}
		i++;
	}
	return str1;
}; /* — ôóíêö³ÿ ïåğåòâîğşº ğÿäîê ó íèæí³é ğåã³ñòğ.*/
char* mystrrev(char* str) {
	int i = 0;
	int j = 0;
	char* str1 = new char[10];
	while (str[i] != '\0') {
		i++;
	}
	while (i != 0) {
		str1[j] = str[i - 1];
		i--;
		j++;
	}
	str1[j] = '\0';
	return str1;
};  /*— ôóíêö³ÿ ğåâåğñóº ğÿäîê ³ ïîâåğòàº ïîêàæ÷èê íà íîâèé ğÿäîê.*/

int mystrlen(const char* str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}; /*— ôóíêö³ÿ âèçíà÷àº äîâæèíó ğÿäêà.*/
char* mystrcpy(char* str1, const char* str2) {
	int i = 0;
	while (str2[i] != '\0') {
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return str1;
}; /*— ôóíêö³ÿ êîï³şº ğÿäîê str2 ó áóôåğ, àäğåñîâàíèé ÷åğåç str1.Ôóíêö³ÿ ïîâåğòàº ïîêàæ÷èê íà ïåğøèé ğÿäîê str1.*/
char* mystrcat(char* str1, const char* str2) {
	int i = 0;
	int j = 0;
	while (str1[i] != '\0') {
		i++;
	}
	while (str2[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	return str1;
};/* — ôóíêö³ÿ ïğèºäíóº ğÿäîê str2 äî ğÿäêà str1.Ôóíêö³ÿ ïîâåğòàº ïîêàæ÷èê íà ïåğøèé ğÿäîê str1.*/
char* mystrchr(char* str, char s) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == s) {
			return &str[i];
		}
		i++;
	}
	return 0;
}; /*— ôóíêö³ÿ çä³éñíşº ïîøóê ñèìâîëó s ó ğÿäêó str.Ôóíêö³ÿ ïîâåğòàº ïîêàæ÷èê íà ïåğøå âõîäæåííÿ ñèìâîëó â ğÿäîê, â ³íøîìó âèïàäêó — 0.*/
char* mystrstr(char* str1, char* str2) {
	int i = 0;
	int j = 0;
	int k = 0;
	while (str1[i] != '\0') {
		if (str1[i] == str2[j]) {
			while (str2[j] != '\0') {
				if (str1[i] == str2[j]) {
					i++;
					j++;
					k++;
				}
				else {
					j = 0;
					k = 0;
					break;
				}
			}
			if (k == mystrlen(str2)) {
				return &str1[i - k];
			}
		}
		i++;
	}
	return 0;
}; /*— ôóíêö³ÿ çä³éñíşº ïîøóê ï³äğÿäêà str2 ó ğÿäêó str1.Ôóíêö³ÿ ïîâåğòàº ïîêàæ÷èê íà ïåğøå âõîäæåííÿ ï³äğÿäêà str2 ó ğÿäîê str1, â ³íøîìó âèïàäêó — 0.*/
