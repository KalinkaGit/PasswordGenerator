/**
 * @file main.c
 * @author Kalinka (https://github.com/KalinkaGit)
 * @brief Where the magic happens.
 * @version 1.0.0
 * @date 2023-01-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* SYSTEM INCLUDES */
#include <stdio.h>

/* LOCAL INCLUDES */
#include "constants.h"
#include "handlers.h"

/**
 * @brief Main function.
 *
 * @param argc Argument count.
 * @param argv Argument vector.
 */
int main(int argc, char *argv[])
{
    if (handle_errors(argc, argv) == RETURN_FAILURE)
    {
        return (EXIT_FAILURE);
    }
    if (handle_args(argc, argv) == RETURN_FAILURE)
    {
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
