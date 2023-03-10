/**
 * @file options.h
 * @author Kalinka (https://github.com/KalinkaGit)
 * @brief Header file for project options
 * @version 1.0.0
 * @date 2023-01-07
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef OPTIONS_H
    #define OPTIONS_H

    /* SYSTEM INCLUDES */
    #include <stdbool.h>

    /**
     * @brief Options first bitfield.
     */
    typedef enum {
        OPT_NONE = 0, /**< No options. */
        OPT_HELP = 1, /**< Help option. */
        OPT_VERSION = 2, /**< Version option. */
        OPT_LENGTH = 4, /**< Length option. */
        OPT_SPECIAL = 8, /**< Special option. */
        OPT_NUMBERS = 16, /**< Numbers option. */
        OPT_ALPHABET = 32, /**< Alphabet option. */
        OPT_UPPERCASE = 64, /**< Uppercase option. */
        OPT_REPEAT = 128, /**< Repeat option. */
        OPT_COMPLEXITY = 256, /**< Complexity option. */
    } options_bitfield_t;

    /**
     * @brief Options second bitfield.
     */
    typedef enum {
        OPT2_INFO = 0, /**< Info option. */
        OPT2_KEEP = 1, /**< Keep option. */
        OPT2_SAVE = 2, /**< Save option. */
        OPT2_PASSPHRASE = 4, /**< Passphrase option. */
        OPT2_WORDS = 8, /**< Wordlist option. */
        OPT2_QUIET = 16, /**< Quiet option. */
        OPT2_BROWTF = 32, /**< BroWTF option. */
        OPT2_MC = 64, /**< Credits option. */
    } options_bitfield2_t;

    /**
     * @brief Complexity options.
     */
    typedef enum {
        COMPLEXITY_NONE = 0, /**< No complexity. */
        COMPLEXITY_LOW = 1, /**< Low complexity. */
        COMPLEXITY_MEDIUM = 2, /**< Medium complexity. */
        COMPLEXITY_HIGH = 3, /**< High complexity. */
        COMPLEXITY_007 = 4, /**< 007 complexity. */
    } complexity_t;

    /**
     * @brief Structure for files.
     */
    typedef struct {
        char *save_file; /**< Save file. */
        char *passphrase_file; /**< Passphrase file. */
    } files_t;

    /**
     * @brief Structure for options lists.
     */
    typedef struct {
        char *special; /**< Special characters to use. */
        char *numbers; /**< Numbers to use. */
        char *alphabet; /**< Alphabet to use. */
    } list_t;

    /**
     * @brief Structure for options.
     */
    typedef struct {
        options_bitfield_t bitfield; /**< Bitfield of options. */
        int length; /**< Length of the password. */
        list_t list; /**< Lists for options. */
        complexity_t complexity; /**< Complexity option. */
        int passphrase; /**< Passphrase number of words. */
        files_t files; /**< Files to use. */
    } options_t;

#endif /* OPTIONS_H */