
#include<stdlib.h>
#include <iostream>
#include<stdio.h>

using namespace std;
typedef struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* agac;

struct node* ekle(node* agac, int key) {
    node* root = (struct node*)malloc(sizeof(struct node));
    if (agac == NULL)
    {
        root->left = NULL;
        root->right = NULL;
        root->data = key;
        return root;
    };
    if (agac->data < key)
    {
        agac->right = ekle(agac->right, key);

    }
    else
    {
        agac->left = ekle(agac->left, key);

    }
    return agac;
}
void traverse(node* agac) {
    if (agac == NULL)
    {
        return;
    }
    else
    {
        traverse(agac->left);
        cout << agac->data << endl;
        traverse(agac->right);
    }
}
int max(node* agac) {

    while (agac->right != NULL)
    {
        agac = agac->right;
    }
    return agac->data;

}

int min(node* agac) {

    while (agac->left != NULL)
    {
        agac = agac->left;
    }
    return agac->data;
}
int aranandeger(node* agac, int aranan) {

    if (agac == NULL)

        return 0;

    if (agac->data == aranan)
    {
        return 1;
    };
    if (aranandeger(agac->left, aranan) == 1)
    {
        return 1;
    }
    if (aranandeger(agac->right, aranan) == 1)
    {
        return 1;
    }
    return -1;
}


struct node* sil(node* agac, int silinen) {

    if (agac == NULL)
    {
        return NULL;
    }
    if (agac->data == silinen)
    {
        if (agac->left == NULL && agac->right == NULL)
        {
            return NULL;
        }
        if (agac->right != NULL)
        {
            agac->data = min(agac->right);
            agac->right = sil(agac->right, min(agac->right));
            return agac;
        }
        if (agac->left != NULL)
        {
            agac->data = max(agac->left);
            agac->left = sil(agac->left, max(agac));
            return agac;
        }
        if (agac->data < silinen)
        {
            agac->right = sil(agac->right, silinen);
            return agac;
        }
        if (agac->data < silinen)
        {
            agac->left = sil(agac->left, silinen);
            return agac;
        }
        return agac;
    }

}



int main()
{

    agac = ekle(agac, 10);
    ekle(agac, 20);
    ekle(agac, 30);
    sil(agac, 100);
    ekle(agac, 40);
    ekle(agac, 60);
    ekle(agac, 100);
    ekle(agac, 59959);
    ekle(agac, 310);
    ekle(agac, 30);
    ekle(agac, 7);
    traverse(agac);

    cout << "En buyuk Deger: " << max(agac) << endl;
    cout << "En kucuk Deger: " << min(agac) << endl;
    cout << "Aranan Deger: " << aranandeger(agac, 100);
}

