//generic data container capable of storing either an integer, a float, a character, or a string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    INT,
    FLOAT,
    CHAR,
    STRING
} DataType;

typedef union {
    int i;
    float f;
    char c;
    char *s;
} Data;

typedef struct {
    Data data;
    DataType type;
} DataContainer;

void setInt(DataContainer *container, int value) {
    container->data.i = value;
    container->type = INT;
}

int getInt(DataContainer *container) {
    if (container->type != INT) {
        fprintf(stderr, "Data type mismatch: not an integer.\n");
        exit(EXIT_FAILURE);
    }
    return container->data.i;
}

void setFloat(DataContainer *container, float value) {
    container->data.f = value;
    container->type = FLOAT;
}

float getFloat(DataContainer *container) {
    if (container->type != FLOAT) {
        fprintf(stderr, "Data type mismatch: not a float.\n");
        exit(EXIT_FAILURE);
    }
    return container->data.f;
}

void setChar(DataContainer *container, char value) {
    container->data.c = value;
    container->type = CHAR;
}

char getChar(DataContainer *container) {
    if (container->type != CHAR) {
        fprintf(stderr, "Data type mismatch: not a char.\n");
        exit(EXIT_FAILURE);
    }
    return container->data.c;
}

void setString(DataContainer *container, const char *value) {
    container->data.s = strdup(value);
    container->type = STRING;
}

char* getString(DataContainer *container) {
    if (container->type != STRING) {
        fprintf(stderr, "Data type mismatch: not a string.\n");
        exit(EXIT_FAILURE);
    }
    return container->data.s;
}

void freeContainer(DataContainer *container) {
    if (container->type == STRING) {
        free(container->data.s);
    }
}

void main() {
    DataContainer container;

    setInt(&container, 10);
    printf("Integer: %d\n", getInt(&container));

    setFloat(&container, 3.14f);
    printf("Float: %f\n", getFloat(&container));

    setChar(&container, 'A');
    printf("Char: %c\n", getChar(&container));

    setString(&container, "Hello World");
    printf("String: %s\n", getString(&container));

    // Free memory if a string was allocated
    freeContainer(&container);


}
