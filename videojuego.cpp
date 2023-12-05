#include <iostream>
#include "Environment.h"
#include "Variant.h"

int main() {
    Environment gameEnv;

    Variant playerScore(1000);
    gameEnv.insert("playerScore", playerScore);

    Variant playerHealth(100);
    gameEnv.insert("playerHealth", playerHealth);

    Variant playerName("Player1");
    gameEnv.insert("playerName", playerName);

    std::cout << "Nombre del jugador: " << gameEnv.lookup("playerName").getString() << std::endl;
    std::cout << "Puntuación del jugador: " << gameEnv.lookup("playerScore").getInt() << std::endl;
    std::cout << "Salud del jugador: " << gameEnv.lookup("playerHealth").getInt() << std::endl;

    gameEnv.remove("playerScore");

    if (!gameEnv.exists("playerScore")) {
        std::cout << "La puntuación del jugador ha sido eliminada" << std::endl;
    }

    return 0;
}