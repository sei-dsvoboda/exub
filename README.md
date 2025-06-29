# Examples of Undefined Behavior (UB) in C

This document describes the issues around the development of the [examples](./examples.md) proposal. This document is specifically for the C community to use while developing the Examples document.

The Examples document is targeted for a white paper released by [ISO/IEC/JTC1/SC22/WG14](https://www.open-std.org/jtc1/sc22/wg14/). It will be a 'new work item proposal'. They are based on Annex J.2. of the C23 edition of the ISO C standard.

## Acknowledgments

This document was initially suggested by Aaron Ballman, and championed by David Svoboda.

We would also like to thank WG14's Undefined Behavior Study Group (UBSG), including Martin Uecker for eliminating several undefined behaviors, in his "Slaying the Earthly Demons" series.  Thanks also to Shivashankar Maddanimath, Joseph Myers, Clive Pygott, and Robin Rowe for reviewing this document.

## History

This document was created in late 2021 in the Undefined Behavior Study Group (UBSG). 

It was first presented to WG14 in the Fall 2024 meeting in Minneapolis.

### December 2023 commit & notes

New UB code examples (without notes): 13, 22, 70, 71, 74, 76-78, 83, 84, 88, 89, 91, 95, 97, 98, 101, 102, 114, 116-118, 122, 123, 145, 147, 150, 175-180, 190, 194, 198, 202, 204

New UB code examples with notes:

 * 6: This seems to limit the scope of non-basic character sets to keywords, and no C keyword contains a non-basic character
 * 15: This will compile but not link. It might not qualify; this might be the UB about x being uninitialized.  Is it possible for a variably-length array to have a dimension that is not evaluated?  (This might be an earthly demon).
 * 64: Code sample stolen from Example 2 of C23 6.7.4.1. First example (cs = ncs) does not compile under current Clang, but other UB statements compile with just a warning.
 * 26-29, 146, 149: How to compile?  These look like earthly demons.
 * 52-55, 82, 90, 93, 205: How to compile?  Probably impl-def earthly demons?
 * 77: Bad wording...refuted by example 3 in s6.7.10
 * 85: Please check...code example requires two files
 * 96: Platform-specific behavior, documented in comments
 * 103: Duplicate UB: Isn't there another UB about macro/keyword collision?
 * 148: Is there a purpose or direct way to read nullptr_t objects?
 * 191: I have no idea what this means, and see no related text in section 7.24.4.8.
 * 203, 206, 207: GCC/Clang don't support _Decimal* types
 

### March 2025 commit & notes

Tweaked the following (compile-able) code examples: 7, 13, 15, 55, 58, 76, 110, 111, 148, 169, 204, 205, 206, 207

All TODOs have been partitioned into:

EXTENDED COMPILABLE EXAMPLE: 6, 26, 27, 28, 29, 52, 53, 54, 82, 90, 149
HYPOTHETICAL CODE EXAMPLE: 93, 94, 141, 145, 191

### June 2025 commit & notes

Added remaining examples from CERT rules, recs, and TS 17961.

New examples.c18.md for UBs from C18 that no longer exist in C23.

### Late June 2025 commit & notes

Fixed example 104. The example comprised function definitions rather than
declarations, and both had external linkage.

Stop using 0 as a null pointer constant, for clarity.

Clarify the rules for reserved identifiers in example 105.

Fixed errors and style of example 157: _file instead of *file, use of 0 as a
null pointer constant, use of undefined macro IOFBF and a redundant check for
buf == NULL. Substituted a read of the buffer for a write, because that seems
like a more straightforward example of using the contents of the array.

## Development Rules

Here are some rules that the examples should comply with:

1. All examples should ideally compile with a popular compiler (that is, MSVC, GCC, or Clang)
1. If an example fails to compile with a popular compiler, but does compile with a more obscure compiler, then we should note the compiler used, including version number.  (The compiler may produce any warnings, but should not produce any fatal errors.)
1. If an example fails to build under every compiler we know of, we should note a hypothetical standard C compiler, perhaps with a particular extension that would compile the code.  The phrase "EXTENDED COMPILABLE EXAMPLE" appears for each of the UBs listed here. These are UBs where we cannot think of code that both demonstrates the UB and compiles without errors in GCC, Clang, or MSVC.
1. Finally, if we cannot produce an example that compiles, then perhaps that UB should be eliminated and any such code should be ill-formed, and require a fatal diagnostic in translation.

## Tasks

If you have a few minutes to work on this document, you can do one of two things:

 * Review any UB coding example and verify that it is good (eg it correctly illustrates the particular UB).
   * If you like the example as is, then add your name to the Reviewers section.
   * If you don't like the example, then please repair or replace the example.
     * If you modify the example, then add your name to the Reviewers section AND erase the other reviewers (since they haven't reviewed your changes yet).

## Statistics

Total Number of UB"s in document: 221

Total Number of Code Examples from TS 17961: 37
Total Number of Code Examples from CERT C: 49

## Format

The format of this document is is:

 * C23 UB Number
 * UB Definition
 * Example(s)
 * Notes
 * Reviewers

Before final publication, the Notes and Reviewers can be removed.

## Legal Issues

ISO and IEC do not recognize any licenses other than their own and will not honor any other license without a long, protracted series of negotiations with their lawyers. Therefore, do not submit proprietary code, or any code that is attached to a license that must accompany the code, such as the GNU Public License. This material is currently covered by a CC-BY license. It is intended to become an ISO/IEC document, so any contributions carry implicit permission to be published by ISO and IEC.

### Citations

Many code examples are external to this document, in which case they cite their sources. The code examples come from:

 * TS 17961: [ISO/IEC TS 17961](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1761.pdf). _Information Technology—Programming Languages, Their Environments and System Software Interfaces—C Secure Coding Rules._ Geneva, Switzerland: ISO, 2012.
   * The following subsections of Section 5 of TS 17961 have no examples that demonstrate undefined behavior: 4, 7, 8, 9, 10 (exception), 11 (example 2), 12, 16, 17, 18, 19, 21, 24, 25, 38, 39, 42, 43, 46
 * [CERT C Rule](https://resources.sei.cmu.edu/library/asset-view.cfm?assetID=454220) (published 2016 snapshot of [SEI CERT C Rule](https://wiki.sei.cmu.edu/confluence/display/c/2+Rules)) (NCCE = Noncompliant Code Example)
 * [CERT C Rec](https://wiki.sei.cmu.edu/confluence/display/c/3+Recommendations) (recommendations)

It is expected that before final publication of this document, all of the code examples will be inlined.
The CERT code examples are reproduced with permission of the owner.
