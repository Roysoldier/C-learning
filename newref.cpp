#include <iostream>
#include <string>

void test_const(int const & a)
{
    std::cout << "Je suis dans la fonction test_const.\n";
}

void test_string_const(std::string const & texte)
{
    std::cout << "Je suis dans la fonction test_string_const.\n";
}

int main()
{
    // test_const(42);
    {
        // Nouvelle portée.
        int const variable_temporaire { 42 };
        int const & reference_temporaire { variable_temporaire };
        test_const(reference_temporaire);
        // Nos variables disparaissent.
    }

    // Exemple avec une chaîne de caractères.
    // test_string_const("Salut toi !");
    {
        std::string const texte_temporaire { "Salut toi !" };
        std::string const & reference_temporaire { texte_temporaire };
        test_string_const(reference_temporaire);
    }

    return 0;

}