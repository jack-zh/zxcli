# Contributing to ZXCLI

Thank you for your interest in contributing to ZXCLI! This document provides guidelines and information for contributors.

## Getting Started

### Prerequisites

- C compiler (gcc or clang)
- Make
- Bison (parser generator)
- Flex (lexical analyzer)
- Readline library

### Building the Project

```bash
# Clone the repository
git clone <repository-url>
cd zxcli

# Build the project
make

# Run the CLI
./cli
```

### Development Setup

```bash
# Install dependencies on Ubuntu/Debian
sudo apt-get install build-essential bison flex libreadline-dev

# Install dependencies on macOS
brew install bison flex readline
```

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
└── Makefile         # Build configuration
```

## How to Contribute

### Reporting Issues

- Use the GitHub issue tracker
- Provide a clear description of the problem
- Include steps to reproduce the issue
- Mention your operating system and compiler version

### Submitting Changes

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Make your changes
4. Test your changes thoroughly
5. Commit your changes (`git commit -m 'Add amazing feature'`)
6. Push to your branch (`git push origin feature/amazing-feature`)
7. Open a Pull Request

### Code Style

- Follow existing code formatting
- Use meaningful variable and function names
- Add comments for complex logic
- Keep functions focused and concise

### Testing

Before submitting a pull request:

1. Ensure the project builds without warnings
2. Test the CLI functionality
3. Verify no memory leaks (use valgrind if possible)
4. Check that generated files are not committed

## Pull Request Process

1. Update the README.md with details of changes if applicable
2. Ensure all CI checks pass
3. Request review from maintainers
4. Address any feedback promptly

## License

By contributing, you agree that your contributions will be licensed under the same license as the project.

## Questions?

Feel free to open an issue for any questions or concerns.