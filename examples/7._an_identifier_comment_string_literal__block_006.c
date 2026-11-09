/* In UTF-8 Lowercase n-with-tilde == ñ == U+00F1 == 0xC3 0xB1 == \303 \261 */

/* const char ma\303ana[] = "tomorrow"; */ /* invalid UTF-8, missing \261 */
/* Undefined Behavior if built in UTF-8 locale, even inside comment */
