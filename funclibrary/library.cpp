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
};/* � ������� ������� ��� ����� �, ���� ����� ���, ������� 0, ���� ������ ����� ������ �� ������, �� ������� 1, � ������ ��� � 1.*/
int StringToNumber(char* str) {
	int i = 0;
	int number = 0;
	while (str[i] != '\0') {
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return number;
}; /*� ������� �������� ����� � ����� � ������� �� �����.*/
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
}; /*� ������� �������� ����� � ����� � ������� �������� �� ��� �����.*/
char* Uppercase(char* str1) {
	int i = 0;
	while (str1[i] != '\0') {
		if (str1[i] >= 'a' && str1[i] <= 'z') {
			str1[i] -= 32;
		}
		i++;
	}
	return str1;
}; /* � ������� ���������� ����� � ������ ������.*/
char* Lowercase(char* str1) {
	int i = 0;
	while (str1[i] != '\0') {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] += 32;
		}
		i++;
	}
	return str1;
}; /* � ������� ���������� ����� � ����� ������.*/
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
};  /*� ������� ������� ����� � ������� �������� �� ����� �����.*/

int mystrlen(const char* str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}; /*� ������� ������� ������� �����.*/
char* mystrcpy(char* str1, const char* str2) {
	int i = 0;
	while (str2[i] != '\0') {
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return str1;
}; /*� ������� ����� ����� str2 � �����, ����������� ����� str1.������� ������� �������� �� ������ ����� str1.*/
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
};/* � ������� ������ ����� str2 �� ����� str1.������� ������� �������� �� ������ ����� str1.*/
char* mystrchr(char* str, char s) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == s) {
			return &str[i];
		}
		i++;
	}
	return 0;
}; /*� ������� ������� ����� ������� s � ����� str.������� ������� �������� �� ����� ��������� ������� � �����, � ������ ������� � 0.*/
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
}; /*� ������� ������� ����� ������� str2 � ����� str1.������� ������� �������� �� ����� ��������� ������� str2 � ����� str1, � ������ ������� � 0.*/
