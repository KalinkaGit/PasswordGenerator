/**
 * @file handlers.h
 * @author Kalinka (https://github.com/KalinkaGit)
 * @brief Header file for project handlers
 * @version 1.0.0
 * @date 2023-01-07
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef HANDLERS_H
    #define HANDLERS_H

    /**
     * @brief Handle arguments of the program.
     *
     * @param argc Number of arguments.
     * @param argv Arguments.
     * @return int 0 if handling was successful, -1 otherwise.
     */
    int handle_args(int argc, char *argv[]);

    /**
     * @brief Handle errors of the program.
     *
     * @param argc Number of arguments.
     * @param argv Arguments.
     * @return int 0 if handling was successful, -1 otherwise.
     */
    int handle_errors(int argc, char *argv[]);

#endif /* HANDLERS_H */
