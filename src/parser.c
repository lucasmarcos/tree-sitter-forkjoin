#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_FORK = 1,
  anon_sym_JOIN = 2,
  anon_sym_COMMA = 3,
  anon_sym_EQ = 4,
  anon_sym_COLON = 5,
  sym_label = 6,
  sym_digit = 7,
  anon_sym_SLASH_SLASH = 8,
  aux_sym_comment_token1 = 9,
  sym_semi = 10,
  sym_source_file = 11,
  sym__sttm = 12,
  sym__expr = 13,
  sym_fork = 14,
  sym_join = 15,
  sym_assign = 16,
  sym_call = 17,
  sym_def = 18,
  sym_comment = 19,
  aux_sym_source_file_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_FORK] = "FORK",
  [anon_sym_JOIN] = "JOIN",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [sym_label] = "label",
  [sym_digit] = "digit",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_semi] = "semi",
  [sym_source_file] = "source_file",
  [sym__sttm] = "_sttm",
  [sym__expr] = "_expr",
  [sym_fork] = "fork",
  [sym_join] = "join",
  [sym_assign] = "assign",
  [sym_call] = "call",
  [sym_def] = "def",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_FORK] = anon_sym_FORK,
  [anon_sym_JOIN] = anon_sym_JOIN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_label] = sym_label,
  [sym_digit] = sym_digit,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_semi] = sym_semi,
  [sym_source_file] = sym_source_file,
  [sym__sttm] = sym__sttm,
  [sym__expr] = sym__expr,
  [sym_fork] = sym_fork,
  [sym_join] = sym_join,
  [sym_assign] = sym_assign,
  [sym_call] = sym_call,
  [sym_def] = sym_def,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_FORK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JOIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_semi] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sttm] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_fork] = {
    .visible = true,
    .named = true,
  },
  [sym_join] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'F') ADVANCE(12);
      if (lookahead == 'J') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_FORK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_JOIN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'I') ADVANCE(11);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'K') ADVANCE(4);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(14);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(9);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'R') ADVANCE(10);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_semi);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_FORK] = ACTIONS(1),
    [anon_sym_JOIN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_semi] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym__sttm] = STATE(4),
    [sym__expr] = STATE(6),
    [sym_fork] = STATE(5),
    [sym_join] = STATE(5),
    [sym_assign] = STATE(5),
    [sym_call] = STATE(5),
    [sym_def] = STATE(6),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_FORK] = ACTIONS(7),
    [anon_sym_JOIN] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [2] = {
    [sym__sttm] = STATE(4),
    [sym__expr] = STATE(6),
    [sym_fork] = STATE(5),
    [sym_join] = STATE(5),
    [sym_assign] = STATE(5),
    [sym_call] = STATE(5),
    [sym_def] = STATE(6),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_FORK] = ACTIONS(7),
    [anon_sym_JOIN] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [3] = {
    [sym__sttm] = STATE(4),
    [sym__expr] = STATE(6),
    [sym_fork] = STATE(5),
    [sym_join] = STATE(5),
    [sym_assign] = STATE(5),
    [sym_call] = STATE(5),
    [sym_def] = STATE(6),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_FORK] = ACTIONS(17),
    [anon_sym_JOIN] = ACTIONS(20),
    [sym_label] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_comment,
    ACTIONS(28), 3,
      anon_sym_FORK,
      anon_sym_JOIN,
      sym_label,
  [15] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
    ACTIONS(32), 3,
      anon_sym_FORK,
      anon_sym_JOIN,
      sym_label,
  [30] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    ACTIONS(36), 3,
      anon_sym_FORK,
      anon_sym_JOIN,
      sym_label,
  [45] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
    ACTIONS(40), 3,
      anon_sym_FORK,
      anon_sym_JOIN,
      sym_label,
  [60] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
    ACTIONS(44), 3,
      anon_sym_FORK,
      anon_sym_JOIN,
      sym_label,
  [75] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
    ACTIONS(48), 3,
      anon_sym_FORK,
      anon_sym_JOIN,
      sym_label,
  [90] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    ACTIONS(52), 3,
      anon_sym_FORK,
      anon_sym_JOIN,
      sym_label,
  [105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    ACTIONS(56), 3,
      anon_sym_FORK,
      anon_sym_JOIN,
      sym_label,
  [120] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(58), 1,
      anon_sym_EQ,
    ACTIONS(60), 1,
      anon_sym_COLON,
    ACTIONS(62), 1,
      sym_semi,
    STATE(12), 1,
      sym_comment,
  [136] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(64), 1,
      sym_label,
    STATE(13), 1,
      sym_comment,
  [146] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(66), 1,
      sym_label,
    STATE(14), 1,
      sym_comment,
  [156] = 3,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(70), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
  [166] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_comment,
  [176] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(74), 1,
      sym_semi,
    STATE(17), 1,
      sym_comment,
  [186] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(76), 1,
      sym_label,
    STATE(18), 1,
      sym_comment,
  [196] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(78), 1,
      sym_digit,
    STATE(19), 1,
      sym_comment,
  [206] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      sym_comment,
  [216] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(82), 1,
      sym_semi,
    STATE(21), 1,
      sym_comment,
  [226] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(84), 1,
      sym_label,
    STATE(22), 1,
      sym_comment,
  [236] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 1,
      sym_semi,
    STATE(23), 1,
      sym_comment,
  [246] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      sym_comment,
  [256] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 196,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 216,
  [SMALL_STATE(22)] = 226,
  [SMALL_STATE(23)] = 236,
  [SMALL_STATE(24)] = 246,
  [SMALL_STATE(25)] = 256,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sttm, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sttm, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fork, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fork, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 7, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_join, 7, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_forkjoin(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
