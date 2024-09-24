cmake_minimum_required(VERSION 3.0)

project(TD03)

# Trouve tous les fichiers .cpp dans mon répertoire src
file(GLOB CPP_FILES src/*.cpp)

# Inclusion de FetchContent
include(FetchContent)

# Télécharger et ajouter nlohmann/json via FetchContent
FetchContent_Declare(
  nlohmann_json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
  GIT_TAG v3.11.2  # Tu peux ajuster la version si nécessaire
)

# Assurer que nlohmann_json soit téléchargé et accessible
FetchContent_MakeAvailable(nlohmann_json)

# Boucle sur chaque fichier cpp pour créer autant d'exe
foreach(CPP_NAME ${CPP_FILES}) # Pour chaque élément de cpp_files que j'appelle cpp_name
    # Nom du fichier sans le chemin ni l'extension
    get_filename_component(EXECUTABLE_NAME ${CPP_NAME} NAME_WE) # NAME_WE (Name Without Extension) précise que je veux uniquement le nom, sans l'extension
    
    # Ajoute un exécutable avec le nom du fichier (sans extension)
    add_executable(${EXECUTABLE_NAME} ${CPP_NAME})   # EXECUTABLE_NAME contient les noms des futurs fichiers executables et CPP_NAME contient le chemin des fichiers

    target_compile_features(${EXECUTABLE_NAME} PRIVATE cxx_std_17)
    target_link_libraries(${EXECUTABLE_NAME} PRIVATE nlohmann_json::nlohmann_json)
    
    
endforeach()