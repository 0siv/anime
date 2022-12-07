#include <stdio.h>
#include <cheksum.h>
#include <encrypt.h>

int main() {
	char s[] = "Скажи друг и проходи";
	encrypt(s);
	printf("Зашифровано в: '%s'\n", s);
	printf("Контрольная  сумма: %d\n", cheksum(s));
	encrypt(s);
	printf("Расшифровано обратно в: '%s'\n", s);
	printf("Контрольная  сумма: %d\n", cheksum(s));
	return 0;
}
