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
