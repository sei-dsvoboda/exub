# N???? - Examples of Implementation-Defined Behavior for Annex J.3 in C23
by ???

The paper was created by the Undefined Behavior Study Group, in hopes of publication.  We would therefore request a vote to form an editorial group to adjust this paper for eventual publication as a white paper.

## Introduction

For each implementation-defined behavior, this document provides an example of code that demonstrates this implementation-defined behavior.

For most implementation-defined behaviors, the example code strictly conforms to the Standard, except for the single implementation-defined behavior. These code examples build executable code, although popular compilers may issue a warning.

## Format

The format of this document is:

 * Implementation-Defined Behavior Number
 * Implementation-Defined Behavior Definition (taken from Annex J.3)
 * Example(s)

## Legal Issues

This material is currently covered by a CC-BY license.

## Examples

### Translation

#### 1\. How a diagnostic is identified (3.13, 5.1.1.3).

TODO

Reviewers:

#### 2\. Whether each nonempty sequence of white-space characters other than new-line is retained or replaced by one space character in translation phase 3 (5.1.1.2).

TODO

Reviewers:

### Environment

#### 1\. The mapping between physical source file multibyte characters and the source character set in translation phase 1 (5.1.1.2).

TODO

Reviewers:

#### 2\. The name and type of the function called at program startup in a freestanding environment (5.1.2.2).

TODO

Reviewers:

#### 3\. The effect of program termination in a freestanding environment (5.1.2.2).

TODO

Reviewers:

#### 4\. An alternative manner in which the main function may be defined (5.1.2.3.2).

TODO

Reviewers:

#### 5\. The values given to the strings pointed to by the argv argument to main (5.1.2.3.2).

TODO

Reviewers:

#### 6\. What constitutes an interactive device (5.1.2.4).

TODO

Reviewers:

#### 7\. Whether a program can have more than one thread of execution in a freestanding environment (5.1.2.5).

TODO

Reviewers:

#### 8\. The set of signals, their semantics, and their default handling (7.14).

TODO

Reviewers:

#### 9\. Signal values other than SIGFPE, SIGILL, and SIGSEGV that correspond to a computational exception (7.14.1.1).

TODO

Reviewers:

#### 10\. Signals for which the equivalent of signal(sig, SIG_IGN); is executed at program startup (7.14.1.1).

TODO

Reviewers:

#### 11\. The set of environment names and the method for altering the environment list used by the getenv function (7.24.4.6).

TODO

Reviewers:

#### 12\. The manner of execution of the string by the system function (7.24.4.8).

TODO

Reviewers:

### Identifiers

#### 1\. Which additional multibyte characters may appear in identifiers and their correspondence to universal character names (6.4.2).

TODO

Reviewers:

#### 2\. The number of significant initial characters in an identifier (5.2.5.2, 6.4.2).

TODO

Reviewers:

### Characters

#### 1\. The number of bits in a byte (3.7).

TODO

Reviewers:

#### 2\. The values of the members of the execution character set (5.2.1).

TODO

Reviewers:

#### 3\. The unique value of the member of the execution character set produced for each of the standard alphabetic escape sequences (5.2.3).

TODO

Reviewers:

#### 4\. The value of a char object into which has been stored any character other than a member of the basic execution character set (6.2.5).

TODO

Reviewers:

#### 5\. Which of signed char or unsigned as "plain" char (6.2.5, 6.3.1.1). char has the same range, representation, and behavior

TODO

Reviewers:

#### 6\. The literal encoding, which maps of the characters of the execution character set to the values in a character constant or string literal (6.2.9, 6.4.4.5).

TODO

Reviewers:

#### 7\. The wide literal encoding, of the characters of the execution character set to the values in a wchar_t character constant or wchar_t string literal (6.2.9, 6.4.4.5).

TODO

Reviewers:

#### 8\. The mapping of members of the source character set (in character constants and string literals) to members of the execution character set (6.4.4.5, 5.1.1.2).

TODO

Reviewers:

#### 9\. The value of an integer character constant containing more than one character or containing a character or escape sequence that does not map to a single-byte execution character (6.4.4.5).

TODO

Reviewers:

#### 10\. The value of a wide character constant containing more than one multibyte character or a single multibyte character that maps to multiple members of the extended execution character set, or containing a multibyte character or escape sequence not represented in the extended execution character set (6.4.4.5).

TODO

Reviewers:

#### 11\. The current locale used to convert a wide character constant consisting of a single multibyte character that maps to a member of the extended execution character set into a corresponding wide character code (6.4.4.5).

TODO

Reviewers:

#### 12\. The current locale used to convert a wide string literal into corresponding wide character codes (6.4.5).

TODO

Reviewers:

#### 13\. The value of a string literal containing a multibyte character or escape sequence not represented in the execution character set (6.4.5).

TODO

Reviewers:

#### 14\. The encoding of wchar_t where the macro__STDC_ISO_10646__ is not defined (6.10.10.3).

TODO

Reviewers:

### Integers

#### 1\. Any extended integer types that exist in the implementation (6.2.5).

TODO

Reviewers:

#### 2\. The rank of any extended integer type relative to another extended integer type with the same precision (6.3.1.1).

TODO

Reviewers:

#### 3\. The result of, or the signal raised by, converting an integer to a signed integer type when the value cannot be represented in an object of that type (6.3.1.3).

TODO

Reviewers:

#### 4\. The results of some bitwise operations on signed integers (6.5.1).

TODO

Reviewers:

### Floating-point

#### 1\. The accuracy of the floating-point operations and of the library functions in <math.h> and <complex.h> that return floating-point results (5.2.5.3.3).

TODO

Reviewers:

#### 2\. The accuracy of the conversions between floating-point internal representations and string representations performed by the library functions in <stdio.h>, <stdlib.h>, and <wchar.h> 5.2.5.3.3).

TODO

Reviewers:

#### 3\. The rounding behaviors characterized by non-standard values of FLT_ROUNDS (5.2.5.3.3).

TODO

Reviewers:

#### 4\. The evaluation methods characterized by non-standard negative values of FLT_EVAL_METHOD 5.2.5.3.3).

TODO

Reviewers:

#### 5\. The evaluation methods characterized by non-standard negative values of DEC_EVAL_METHOD 5.2.5.3.4).

TODO

Reviewers:

#### 6\. If decimal floating types are supported (6.2.5).

TODO

Reviewers:

#### 7\. The direction of rounding when an integer is converted to a floating-point number that cannot exactly represent the original value (6.3.1.4).

TODO

Reviewers:

#### 8\. The direction of rounding when a floating-point number is converted to a narrower floating- point number (6.3.1.5).

TODO

Reviewers:

#### 9\. How the nearest representable value or the larger or smaller representable value immediately adjacent to the nearest representable value is chosen for certain floating constants (6.4.4.3).

TODO

Reviewers:

#### 10\. Whether and how floating expressions are contracted when not disallowed by the FP_CONTRACT pragma (6.5.1).

TODO

Reviewers:

#### 11\. The default state for the FENV_ACCESS pragma (7.6.1).

TODO

Reviewers:

#### 12\. Additional floating-point exceptions, rounding modes, environments, and classifications, and their macro names (7.6, 7.12).

TODO

Reviewers:

#### 13\. The default state for the FP_CONTRACT pragma (7.12.2).

TODO

Reviewers:

### Arrays and pointers

#### 1\. The result of converting a pointer to an integer or vice versa (6.3.2.3).

TODO

Reviewers:

#### 2\. The size of the result of subtracting two pointers to elements of the same array (6.5.7).

TODO

Reviewers:

### Hints

#### 1\. The extent to which suggestions made by using the register storage-class specifier are effective (6.7.2).

TODO

Reviewers:

#### 2\. The extent to which suggestions made by using the inline function specifier are effective 6.7.5). § J.3.9 © ISO 2024 — All rights reserved

TODO

Reviewers:

### Structures, unions, enumerations, and bit-fields

#### 1\. Whether a "plain" int bit-field is treated as a signed int bit-field or as an unsigned int bit-field (6.7.3, 6.7.3.2).

TODO

Reviewers:

#### 2\. Allowable bit-field types other than bool, signed types (6.7.3.2). int, unsigned int, and bit-precise integer

TODO

Reviewers:

#### 3\. Whether atomic types are permitted for bit-fields (6.7.3.2).

TODO

Reviewers:

#### 4\. Whether a bit-field can straddle a storage-unit boundary (6.7.3.2).

TODO

Reviewers:

#### 5\. The order of allocation of bit-fields within a unit (6.7.3.2).

TODO

Reviewers:

#### 6\. The alignment of non-bit-field members of structures (6.7.3.2). This should present no problem unless binary data written by one implementation is read by another.

TODO

Reviewers:

#### 7\. The integer type compatible with each enumerated type without fixed underlying type (6.7.3.3).

TODO

Reviewers:

### Qualifiers

#### 1\. What constitutes an access to an object that has volatile-qualified type (6.7.4).

TODO

Reviewers:

### Preprocessing directives

#### 1\. The locations within #pragma directives where header name preprocessing tokens are recog- nized (6.4, 6.4.7).

TODO

Reviewers:

#### 2\. How sequences in both forms of header names are mapped to headers or external source file names (6.4.7).

TODO

Reviewers:

#### 3\. Whether the value of a character constant in a constant expression that controls conditional inclusion matches the value of the same character constant in the execution character set 6.10.2).

TODO

Reviewers:

#### 4\. Whether the value of a single-character character constant in a constant expression that controls conditional inclusion may have a negative value (6.10.2).

TODO

Reviewers:

#### 5\. The places that are searched for an included < > delimited header, and how the places are specified or the header is identified (6.10.3).

TODO

Reviewers:

#### 6\. How the named source file is searched for in an included" " delimited header (6.10.3).

TODO

Reviewers:

#### 7\. The method by which preprocessing tokens (possibly resulting from macro expansion\. in a #include directive are combined into a header name (6.10.3).

TODO

Reviewers:

#### 8\. The nesting limit for #include processing (6.10.3).

TODO

Reviewers:

#### 9\. Whether the # operator inserts a \ character before the \ character that begins a universal character name in a character constant or string literal (6.10.5.2).

TODO

Reviewers:

#### 10\. The behavior on each recognized non-STDC #pragma directive (6.10.8).

TODO

Reviewers:

#### 11\. The definitions for__DATE__ and__TIME__ when respectively, the date and time of translation are not available (6.10.10.2).

TODO

Reviewers:

### Library functions

#### 1\. Any library facilities available to a freestanding program, other than the minimal set required by Clause 4 (5.1.2.2).

TODO

Reviewers:

#### 2\. The format of the diagnostic printed by the assert macro (7.2.2.1).

TODO

Reviewers:

#### 3\. The representation of the floating-point status flags stored by the fegetexceptflag function 7.6.4.2).

TODO

Reviewers:

#### 4\. Whether the feraiseexcept function raises the "inexact" floating-point exception in addition to the "overflow" or "underflow" floating-point exception (7.6.4.3).

TODO

Reviewers:

#### 5\. Strings other than"C" and"" that may be passed as the second argument to the setlocale function (7.11.1.1).

TODO

Reviewers:

#### 6\. The types defined for float_t and double_t when the value of the FLT_EVAL_METHOD macro is less than 0 (7.12).

TODO

Reviewers:

#### 7\. The types defined for_Decimal32_t and_Decimal64_t when the value of the DEC_EVAL_METHOD macro is less than 0 (7.12).

TODO

Reviewers:

#### 8\. Domain errors for the mathematics functions, other than those required by this document 7.12.1).

TODO

Reviewers:

#### 9\. The values returned by the mathematics functions on domain errors or pole errors (7.12.1).

TODO

Reviewers:

#### 10\. The values returned by the mathematics functions on underflow range errors, whether errno is set to the value of the macro ERANGE when the integer expression math_errhandling & MATH_ERRNO is nonzero, and whether the "underflow" floating-point exception is raised when the integer expression math_errhandling & MATH_ERREXCEPT is nonzero. (7.12.1).

TODO

Reviewers:

#### 11\. Whether a domain error occurs or zero is returned when an fmod function has a second argument of zero (7.12.10.1).

TODO

Reviewers:

#### 12\. Whether a domain error occurs or zero is returned when a remainder function has a second argument of zero (7.12.10.2).

TODO

Reviewers:

#### 13\. The base-2 logarithm of the modulus used by the remquo functions in reducing the quotient 7.12.10.3).

TODO

Reviewers:

#### 14\. Whether a domain error occurs or zero is returned when a remquo function has a second argument of zero (7.12.10.3).

TODO

Reviewers:

#### 15\. Whether the equivalent of signal(sig, SIG_DFL); is executed prior to the call of a signal handler, and, if not, the blocking of signals that is performed (7.14.1.1).

TODO

Reviewers:

#### 16\. The value of__STDC_ENDIAN_NATIVE__ if the execution environment is not big-endian or little-endian (7.18.2)

TODO

Reviewers:

#### 17\. The null pointer constant to which the macro NULL expands (7.21).

TODO

Reviewers:

#### 18\. Whether the last line of a text stream requires a terminating new-line character (7.23.2).

TODO

Reviewers:

#### 19\. Whether space characters that are written out to a text stream immediately before a new-line character appear when read in (7.23.2).

TODO

Reviewers:

#### 20\. The number of null characters that may be appended to data written to a binary stream (7.23.2).

TODO

Reviewers:

#### 21\. Whether the file position indicator of an append-mode stream is initially positioned at the beginning or end of the file (7.23.3).

TODO

Reviewers:

#### 22\. Whether a write on a text stream causes the associated file to be truncated beyond that point 7.23.3).

TODO

Reviewers:

#### 23\. The characteristics of file buffering (7.23.3).

TODO

Reviewers:

#### 24\. Whether a zero-length file actually exists (7.23.3).

TODO

Reviewers:

#### 25\. The rules for composing valid file names (7.23.3).

TODO

Reviewers:

#### 26\. Whether the same file can be simultaneously open multiple times (7.23.3).

TODO

Reviewers:

#### 27\. The nature and choice of encodings used for multibyte characters in files (7.23.3).

TODO

Reviewers:

#### 28\. The effect of the remove function on an open file (7.23.4.1).

TODO

Reviewers:

#### 29\. The effect if a file with the new name exists prior to a call to the rename function (7.23.4.2).

TODO

Reviewers:

#### 30\. Whether an open temporary file is removed upon abnormal program termination (7.23.4.3).

TODO

Reviewers:

#### 31\. Which changes of mode are permitted (if any), and under what circumstances (7.23.5.4).

TODO

Reviewers:

#### 32\. The style used to print an infinity or NaN, and the meaning of any n-char or n-wchar sequence printed for a NaN (7.23.6.1, 7.31.2.1).

TODO

Reviewers:

#### 33\. The output for %p conversion in the fprintf or fwprintf function (7.23.6.1, 7.31.2.1).

TODO

Reviewers:

#### 34\. The interpretation of a- character that is neither the first nor the last character, nor the second where a^ character is the first, in the scanlist for %[ conversion in the fscanf or fwscanf function (7.23.6.2, 7.31.2.1).

TODO

Reviewers:

#### 35\. The set of sequences matched by a %p conversion and the interpretation of the corresponding input item in the fscanf or fwscanf function (7.23.6.2, 7.31.2.2).

TODO

Reviewers:

#### 36\. The value to which the macro errno is set by the fgetpos, fsetpos, or ftell functions on failure (7.23.9.1, 7.23.9.3, 7.23.9.4).

TODO

Reviewers:

#### 37\. The meaning of any n-char or n-wchar sequence in a string representing a NaN that is converted by the strtod, strtof, strtold, wcstod, wcstof, or wcstold function (7.24.1.5, 7.31.4.1.2).

TODO

Reviewers:

#### 38\. Whether the strtod, strtof, strtold, wcstod, wcstof, or wcstold function sets errno to ERANGE when underflow occurs (7.24.1.5, 7.31.4.1.2).

TODO

Reviewers:

#### 39\. The meaning of any d-char or d-wchar sequence in a string representing a NaN that is con- verted by the strtod32, strtod64, strtod128, wcstod32, wcstod64, or wcstod128 function 7.24.1.6, 7.31.4.1.3).

TODO

Reviewers:

#### 40\. Whether the strtod32, strtod64, strtod128, wcstod32, wcstod64, or wcstod128 function sets errno to ERANGE when underflow occurs (7.24.1.6, 7.31.4.1.3).

TODO

Reviewers:

#### 41\. Whether the calloc, malloc, realloc, and aligned_alloc functions return a null pointer or a pointer to an allocated object when the size requested is zero (7.24.3).

TODO

Reviewers:

#### 42\. Whether open streams with unwritten buffered data are flushed, open streams are closed, or temporary files are removed when the abort or_Exit function is called (7.24.4.1, 7.24.4.5).

TODO

Reviewers:

#### 43\. The termination status returned to the host environment by the abort, exit,_Exit, or quick_exit function (7.24.4.1, 7.24.4.4, 7.24.4.5, 7.24.4.7).

TODO

Reviewers:

#### 44\. The value returned by the system function when its argument is not a null pointer (7.24.4.8).

TODO

Reviewers:

#### 45\. Whether the internal state of multibyte/wide character conversion functions has thread-storage duration, and its initial value in newly created threads (7.24.7).

TODO

Reviewers:

#### 46\. Whether the multibyte/wide character conversion functions avoid data races with other calls to the same function (7.24.7).

TODO

Reviewers:

#### 47\. The range and precision of times representable in clock_t and time_t (7.29).

TODO

Reviewers:

#### 48\. The local time zone and Daylight Saving Time (7.29.1).

TODO

Reviewers:

#### 49\. Whether TIME_MONOTONIC or TIME_ACTIVE are supported time bases (7.29.1).

TODO

Reviewers:

#### 50\. Whether TIME_THREAD_ACTIVE is a supported time bases (7.29.1, 7.28.1).

TODO

Reviewers:

#### 51\. The era for the clock function (7.29.2.1).

TODO

Reviewers:

#### 52\. The TIME_UTC epoch (7.29.2.6).

TODO

Reviewers:

#### 53\. The replacement string for the %Z specifier to the strftime, and wcsftime functions in the "C" locale (7.29.3.5, 7.31.5.1).

TODO

Reviewers:

#### 54\. Whether internal mbstate_t objects have thread storage duration (7.30.1, 7.31.6.3, 7.31.6.4).

TODO

Reviewers:

#### 55\. Whether the functions in <math.h> honor the rounding direction mode in an ISO/IEC 60559 conformant implementation, unless explicitly specified otherwise (F.10).

TODO

Reviewers:

### Architecture

#### 1\. The values or expressions assigned to the macros specified in the headers <float.h>, <limits.h>, and <stdint.h> (5.2.5.3, 7.22).

TODO

Reviewers:

#### 2\. The result of attempting to indirectly access an object with automatic or thread storage duration from a thread other than the one with which it is associated (6.2.4).

TODO

Reviewers:

#### 3\. The number, order, and encoding of bytes in any object (when not explicitly specified in this document\. (6.2.6.1).

TODO

Reviewers:

#### 4\. Whether any extended alignments are supported and the contexts in which they are supported 6.2.8).

TODO

Reviewers:

#### 5\. Valid alignment values other than those returned by an alignof expression for fundamental types, if any (6.2.8).

TODO

Reviewers:

#### 6\. The value of the result of the sizeof and alignof operators (6.5.4.4).

TODO

Reviewers:

