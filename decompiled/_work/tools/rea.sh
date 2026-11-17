#!/usr/bin/env bash
# Run the REA CLI with the project-local JDK + Ghidra, from a scratch dir outside the target.
T="/c/Users/jenks/code/tea-rea/_tools"
export JAVA_HOME='C:\Users\jenks\code\tea-rea\_tools\jdk\jdk-21.0.13'
export GHIDRA_INSTALL_DIR='C:\Users\jenks\code\tea-rea\_tools\ghidra\ghidra_12.1.4_PUBLIC'
export PATH="$T/jdk/jdk-21.0.13/bin:$PATH"
export REA_GHIDRA_STARTUP_TIMEOUT_MS="${REA_GHIDRA_STARTUP_TIMEOUT_MS:-1800000}"
cd "$(dirname "$0")/../rea-run" || exit 1
exec npx -y rea-agents@latest "$@"
