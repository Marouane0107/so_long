# So Long 🎮

A 2D top-down game built in C using the MiniLibX graphics library. The player must collect all collectibles and reach the exit to win.

## 📋 Table of Contents

- [About](#about)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Game Rules](#game-rules)
- [Map Format](#map-format)
- [Controls](#controls)
- [Project Structure](#project-structure)
- [Author](#author)

## 🎯 About

So Long is a simple 2D game where the player navigates through a map, collects items, and finds the exit. This project is part of the 42 School curriculum, focusing on:

- Working with textures and sprites
- Basic gameplay mechanics
- Event handling (keyboard input)
- Memory management
- Graphics programming with MiniLibX

## ✨ Features

- **2D Graphics**: Rendered using MiniLibX
- **Player Movement**: WASD/Arrow key controls
- **Collectibles**: Gather all items to unlock the exit
- **Path Validation**: Ensures the map has a valid solution
- **Move Counter**: Tracks player movements
- **Window Management**: Proper window closing and ESC key support

## 🔧 Prerequisites

- **macOS** (MiniLibX is designed for macOS)
- **Xcode Command Line Tools**
- **MiniLibX library**
- **C Compiler** (gcc/clang)

### Installing MiniLibX

```bash
# Clone MiniLibX repository
git clone https://github.com/42Paris/minilibx-linux.git
cd minilibx-linux
make
# Follow the installation instructions for your system
```

## 🚀 Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/Marouane0107/so_long.git
   cd so_long
   ```

2. **Compile the project**
   ```bash
   make
   ```

3. **Clean object files** (optional)
   ```bash
   make clean
   ```

4. **Full clean** (removes executable)
   ```bash
   make fclean
   ```

5. **Recompile everything**
   ```bash
   make re
   ```

## 🎮 Usage

```bash
./so_long [map_file.ber]
```

**Example:**
```bash
./so_long maps/simple.ber
```

## 📏 Game Rules

1. **Objective**: Collect all collectibles (C) and reach the exit (E)
2. **Movement**: Use WASD or arrow keys to move the player (P)
3. **Walls**: Cannot pass through walls (1)
4. **Victory**: Exit becomes accessible only after collecting all items
5. **Move Counter**: Displayed in the terminal, tracking your efficiency

## 🗺️ Map Format

Maps use `.ber` extension and must follow these rules:

### Map Characters:
- `0` - Empty space
- `1` - Wall
- `C` - Collectible
- `E` - Exit
- `P` - Player starting position

### Map Requirements:
- **Rectangular shape** (all rows same length)
- **Surrounded by walls** (1s on all borders)
- **Exactly one player** starting position (P)
- **Exactly one exit** (E)
- **At least one collectible** (C)
- **Valid path** from player to all collectibles and exit

### Example Map:
```
1111111111111
10010000000C1
1000011111001
1P0011E000001
1111111111111
```

## 🎹 Controls

| Key | Action |
|-----|--------|
| `W` / `↑` | Move Up |
| `A` / `←` | Move Left |
| `S` / `↓` | Move Down |
| `D` / `→` | Move Right |
| `ESC` | Exit Game |
| `❌` (Close Button) | Exit Game |

## 📁 Project Structure

```
so_long/
├── so_long.c           # Main game logic
├── so_long.h           # Header file with structures and prototypes
├── mevment.c           # Player movement handling
├── read-map-arg_check.c # Map reading and argument validation
├── check_map.c         # Map validation functions
├── put_images.c        # Image rendering functions
├── flood_fill.c        # Path validation algorithm
├── end_game.c          # Game ending logic
├── ft_split.c          # String splitting utility
├── print_itoi.c        # Utility functions
├── get_next_line1/     # Directory for reading files line by line
│   ├── get_next_line.c
│   └── get_next_line_utils.c
├── Makefile            # Build configuration
└── README.md           # This file
```

## 🛠️ Key Functions

- **Map Validation**: Ensures map integrity and solvability
- **Flood Fill Algorithm**: Validates that all collectibles and exit are reachable
- **Movement System**: Handles player movement with collision detection
- **Image Management**: Loads and displays game sprites
- **Event Handling**: Processes keyboard input and window events

## 🔧 Compilation Flags

- `-Wall -Wextra -Werror`: Strict error checking
- `-lmlx`: Links MiniLibX library
- `-framework OpenGL -framework AppKit`: macOS graphics frameworks

## 👨‍💻 Author

**Marouane Aouzal** (maouzal)
- GitHub: [@Marouane0107](https://github.com/Marouane0107)
- 1337 School Student

## 📝 Notes

- This project is part of the 42 School curriculum
- Developed and tested on macOS
- Memory leaks are strictly forbidden
- All allocated memory must be properly freed
- The program must handle errors gracefully

---

*Created as part of the 42 School So Long project - February 2023*
