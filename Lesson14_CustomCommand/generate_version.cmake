file(READ "${INPUT_FILE}" VERSION)
string(STRIP "${VERSION}" VERSION)

file(WRITE "${OUTPUT_FILE}"
    "#pragma once\n"
    "#define APP_VERSION \"${VERSION}\"\n"
)