# ZXCLI

A command-line interface parser demo program built with Flex (lexical analyzer), Bison (parser generator), and Readline.

## Features

- **Lexical Analysis**: Uses Flex for token recognition
- **Parser Generation**: Built with Bison for syntax analysis
- **Interactive CLI**: Readline integration for user-friendly command input
- **Cross-platform**: Supports both Linux and macOS

## Prerequisites

### Ubuntu/Debian
```bash
sudo apt-get install build-essential bison flex libreadline-dev
```

### macOS
```bash
brew install bison flex readline
```

## Building

```bash
make
```

This will generate the CLI executable and all necessary parser/lexer files.

## Usage

```bash
./cli
```

The CLI will start with an interactive prompt where you can enter commands.

## Project Structure

```
zxcli/
├── lexer.l          # Flex lexical analyzer definition
├── parser.y         # Bison parser definition
├── main.c           # Main entry point
├── rpc_cli.c        # CLI implementation
├── rpc_cli.h        # Header file with function declarations
├── readline.c       # Readline integration
├── lookup.c         # Token lookup functionality
├── Makefile         # Build configuration
└── .github/         # GitHub Actions CI/CD
```

## Development

See [CONTRIBUTING.md](CONTRIBUTING.md) for development guidelines and contribution instructions.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Built with [Flex](https://github.com/westes/flex) and [Bison](https://www.gnu.org/software/bison/)
- Uses [GNU Readline](https://tiswww.case.edu/php/chet/readline/rltop.html) for interactive input