/**
 * @file constants.h
 * @author Kalinka (https://github.com/KalinkaGit)
 * @brief Header file for constants used throughout the project.
 * @version 1.0.0
 * @date 2023-01-07
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef CONSTANTS_H
    #define CONSTANTS_H

    /* MACROS */
    #define PROGRAM_NAME "gen_pass"

    #define ERROR_MSG_MALLOC "./" PROGRAM_NAME ": Failed to allocate memory."
    #define ERROR_MSG_INVALID_OPTION(_opt) "./" PROGRAM_NAME ": invalid option -- '" _opt "'\nTry './" PROGRAM_NAME " --help' for more information.\n"

    /**
     * @brief Program exit codes.
     */
    typedef enum
    {
        EXIT_SUCCESS = 0,    /**< Program ran successfully. */
        EXIT_FAILURE = 1     /**< Program failed. */
    } exit_code_t;

    /**
     * @brief Function return codes.
     */
    typedef enum
    {
        RETURN_SUCCESS = 0,   /**< Function ran successfully. */
        RETURN_FAILURE = -1   /**< Function failed. */
    } return_code_t;

#endif /* CONSTANTS_H */
