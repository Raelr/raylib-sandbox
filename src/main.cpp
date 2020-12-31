#include <raylib-cpp.hpp>
#include <vector>
#include <map>
#include <string>
#include <variant>

int main() {
    
    // Initialization
    int screenWidth = 800;
    int screenHeight = 450;

    raylib::Color textColor(LIGHTGRAY);
    raylib::Window w(screenWidth, screenHeight, "Raylib C++ Starter Kit Example");

    // Create main camera
    raylib::Camera3D camera = raylib::Camera3D(
            raylib::Vector3(0.f, 10.f, 10.f),
            raylib::Vector3(0.f, 0.f, 0.f),
            raylib::Vector3(0.f, 1.f, 0.f),
            45.f,
            CAMERA_PERSPECTIVE
    );
    
    SetTargetFPS(60);

    // TEST 1 - Using a raylib::Model in a map without std::variant.

    // std::map<std::string, raylib::Model*> map = std::map<std::string, raylib::Model*>();

    // raylib::Model model = raylib::Model("assets/models/cube/cube.obj");

    // map.insert({"model", &model});

    // TEST 2 - Using a raylib::Model in a map with std::variant.

    // raylib::Model variantModel("assets/models/cube/cube.obj");

    // auto variantMap = std::map<std::string, std::variant<raylib::Model*, raylib::Texture2D*>>();

    // variantMap.insert({"model", &variantModel});

    // TEST 3 - Using a raylib::Model with a variant that was directly instantiated/

    // raylib::Model model("assets/models/cube/cube.obj");

    // auto map = std::map<std::string, std::variant<raylib::Model*, raylib::Texture2D*>>();

    // map.insert({"model", std::variant<raylib::Model*, raylib::Texture2D*>(&model)});

    // TEST 4 - Using a normal Model in a map without Variant:

    // Model model = LoadModel("assets/models/cube/cube.obj");

    // auto map = std::map<std::string, Model*>();

    // map.insert({"model", &model});

    // TEST 5 - Using a normal Model in a map with Variant:

    // Model model = LoadModel("assets/models/cube/cube.obj");

    // auto map = std::map<std::string, std::variant<Model*, Texture2D*>>();

    // map.insert({"model", &model});

    // Main game loop
    while (!w.ShouldClose()) // Detect window close button or ESC key
    {
        // Update

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        textColor.DrawText("Congrats! You created your first window!", 190, 200, 20);
        EndDrawing();
    }

    return 0;
}