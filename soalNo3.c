#include <stdio.h>
#include <string.h>

struct Account {
    char account_number[20];
    char status_code[10];
};

int main() {
    struct Account accounts[3] = {
        {"10301240069", "valid"},
        {"12345", "invalid"},
        {"67890", "valid"}
    };

    char input_acc[20];
    long long amount_of_sale;
    int found = 0;

    printf("Masukkan Nomor Akun: ");
    scanf("%s", input_acc);

    for (int i = 0; i < 3; i++) {
        if (strcmp(accounts[i].account_number, input_acc) == 0) {
            found = 1;
            if (strcmp(accounts[i].status_code, "valid") == 0) {
                printf("Masukkan jumlah penjualan: Rp ");
                scanf("%lld", &amount_of_sale);
                printf("\n--- INVOICE DIHASILKAN ---\n");
                printf("Nomor Akun      : %s\n", accounts[i].account_number);
                printf("Jumlah Penjualan: Rp %lld\n", amount_of_sale);
                printf("--------------------------\n");
            } else {
                printf("Error: Status akun TIDAK valid.\n");
            }
            return 0;
        }
    }

    if (!found) {
        printf("Error: Nomor akun tidak ditemukan dalam database ACCOUNTS.\n");
    }

    return 0;
}