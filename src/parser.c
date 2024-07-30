#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_SPACE = 2,
  anon_sym_RBRACK = 3,
  anon_sym_COLON = 4,
  anon_sym_COLON2 = 5,
  anon_sym_TRACE = 6,
  anon_sym_DEBUG = 7,
  anon_sym_INFO = 8,
  anon_sym_WARN = 9,
  anon_sym_ERROR = 10,
  anon_sym_FATAL = 11,
  anon_sym_Mon = 12,
  anon_sym_Tue = 13,
  anon_sym_Wed = 14,
  anon_sym_Thu = 15,
  anon_sym_Fri = 16,
  anon_sym_Sat = 17,
  anon_sym_Sun = 18,
  anon_sym_Jan = 19,
  anon_sym_Feb = 20,
  anon_sym_Mar = 21,
  anon_sym_Apr = 22,
  anon_sym_May = 23,
  anon_sym_Jun = 24,
  anon_sym_Jul = 25,
  anon_sym_Aug = 26,
  anon_sym_Sep = 27,
  anon_sym_Oct = 28,
  anon_sym_Nov = 29,
  anon_sym_Dec = 30,
  sym_day = 31,
  sym_time = 32,
  sym_year = 33,
  sym_file_path = 34,
  sym_line_number = 35,
  sym_message = 36,
  sym_log_file = 37,
  sym_log_entry = 38,
  sym_log_level = 39,
  sym_timestamp = 40,
  sym_day_of_week = 41,
  sym_month = 42,
  aux_sym_log_file_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_SPACE] = " ",
  [anon_sym_RBRACK] = "] ",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON2] = ": ",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_INFO] = "INFO",
  [anon_sym_WARN] = "WARN",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_FATAL] = "FATAL",
  [anon_sym_Mon] = "Mon",
  [anon_sym_Tue] = "Tue",
  [anon_sym_Wed] = "Wed",
  [anon_sym_Thu] = "Thu",
  [anon_sym_Fri] = "Fri",
  [anon_sym_Sat] = "Sat",
  [anon_sym_Sun] = "Sun",
  [anon_sym_Jan] = "Jan",
  [anon_sym_Feb] = "Feb",
  [anon_sym_Mar] = "Mar",
  [anon_sym_Apr] = "Apr",
  [anon_sym_May] = "May",
  [anon_sym_Jun] = "Jun",
  [anon_sym_Jul] = "Jul",
  [anon_sym_Aug] = "Aug",
  [anon_sym_Sep] = "Sep",
  [anon_sym_Oct] = "Oct",
  [anon_sym_Nov] = "Nov",
  [anon_sym_Dec] = "Dec",
  [sym_day] = "day",
  [sym_time] = "time",
  [sym_year] = "year",
  [sym_file_path] = "file_path",
  [sym_line_number] = "line_number",
  [sym_message] = "message",
  [sym_log_file] = "log_file",
  [sym_log_entry] = "log_entry",
  [sym_log_level] = "log_level",
  [sym_timestamp] = "timestamp",
  [sym_day_of_week] = "day_of_week",
  [sym_month] = "month",
  [aux_sym_log_file_repeat1] = "log_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON2] = anon_sym_COLON2,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_WARN] = anon_sym_WARN,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_FATAL] = anon_sym_FATAL,
  [anon_sym_Mon] = anon_sym_Mon,
  [anon_sym_Tue] = anon_sym_Tue,
  [anon_sym_Wed] = anon_sym_Wed,
  [anon_sym_Thu] = anon_sym_Thu,
  [anon_sym_Fri] = anon_sym_Fri,
  [anon_sym_Sat] = anon_sym_Sat,
  [anon_sym_Sun] = anon_sym_Sun,
  [anon_sym_Jan] = anon_sym_Jan,
  [anon_sym_Feb] = anon_sym_Feb,
  [anon_sym_Mar] = anon_sym_Mar,
  [anon_sym_Apr] = anon_sym_Apr,
  [anon_sym_May] = anon_sym_May,
  [anon_sym_Jun] = anon_sym_Jun,
  [anon_sym_Jul] = anon_sym_Jul,
  [anon_sym_Aug] = anon_sym_Aug,
  [anon_sym_Sep] = anon_sym_Sep,
  [anon_sym_Oct] = anon_sym_Oct,
  [anon_sym_Nov] = anon_sym_Nov,
  [anon_sym_Dec] = anon_sym_Dec,
  [sym_day] = sym_day,
  [sym_time] = sym_time,
  [sym_year] = sym_year,
  [sym_file_path] = sym_file_path,
  [sym_line_number] = sym_line_number,
  [sym_message] = sym_message,
  [sym_log_file] = sym_log_file,
  [sym_log_entry] = sym_log_entry,
  [sym_log_level] = sym_log_level,
  [sym_timestamp] = sym_timestamp,
  [sym_day_of_week] = sym_day_of_week,
  [sym_month] = sym_month,
  [aux_sym_log_file_repeat1] = aux_sym_log_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEBUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FATAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Wed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Thu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Jan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Feb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Apr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_May] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Jun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Jul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Aug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Oct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Nov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dec] = {
    .visible = true,
    .named = false,
  },
  [sym_day] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_year] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_line_number] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_log_file] = {
    .visible = true,
    .named = true,
  },
  [sym_log_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_log_level] = {
    .visible = true,
    .named = true,
  },
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_day_of_week] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_log_file_repeat1] = {
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
  [26] = 26,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(61);
      ADVANCE_MAP(
        ':', 65,
        'A', 44,
        'D', 13,
        'E', 25,
        'F', 7,
        'I', 18,
        'J', 29,
        'M', 30,
        'N', 43,
        'O', 33,
        'S', 31,
        'T', 22,
        'W', 10,
        '[', 62,
        ']', 1,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'F') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'G') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 52:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(100);
      END_STATE();
    case 53:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 54:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_FATAL);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_Mon);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_Tue);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Wed);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Thu);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_Fri);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Sat);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Sun);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Jan);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Feb);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Mar);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Apr);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Jun);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Jul);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Aug);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Sep);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Oct);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Nov);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Dec);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_day);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_day);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_day);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_day);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_year);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_file_path);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_line_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_line_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_message);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_message);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
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
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 103},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_FATAL] = ACTIONS(1),
    [anon_sym_Mon] = ACTIONS(1),
    [anon_sym_Tue] = ACTIONS(1),
    [anon_sym_Wed] = ACTIONS(1),
    [anon_sym_Thu] = ACTIONS(1),
    [anon_sym_Fri] = ACTIONS(1),
    [anon_sym_Sat] = ACTIONS(1),
    [anon_sym_Sun] = ACTIONS(1),
    [anon_sym_Jan] = ACTIONS(1),
    [anon_sym_Feb] = ACTIONS(1),
    [anon_sym_Mar] = ACTIONS(1),
    [anon_sym_Apr] = ACTIONS(1),
    [anon_sym_May] = ACTIONS(1),
    [anon_sym_Jun] = ACTIONS(1),
    [anon_sym_Jul] = ACTIONS(1),
    [anon_sym_Aug] = ACTIONS(1),
    [anon_sym_Sep] = ACTIONS(1),
    [anon_sym_Oct] = ACTIONS(1),
    [anon_sym_Nov] = ACTIONS(1),
    [anon_sym_Dec] = ACTIONS(1),
    [sym_day] = ACTIONS(1),
    [sym_year] = ACTIONS(1),
    [sym_line_number] = ACTIONS(1),
  },
  [1] = {
    [sym_log_file] = STATE(13),
    [sym_log_entry] = STATE(5),
    [aux_sym_log_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(16), 1,
      sym_month,
    ACTIONS(7), 12,
      anon_sym_Jan,
      anon_sym_Feb,
      anon_sym_Mar,
      anon_sym_Apr,
      anon_sym_May,
      anon_sym_Jun,
      anon_sym_Jul,
      anon_sym_Aug,
      anon_sym_Sep,
      anon_sym_Oct,
      anon_sym_Nov,
      anon_sym_Dec,
  [18] = 3,
    STATE(11), 1,
      sym_timestamp,
    STATE(12), 1,
      sym_day_of_week,
    ACTIONS(9), 7,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
  [34] = 2,
    STATE(9), 1,
      sym_log_level,
    ACTIONS(11), 6,
      anon_sym_TRACE,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_FATAL,
  [46] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_log_entry,
      aux_sym_log_file_repeat1,
  [57] = 3,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(6), 2,
      sym_log_entry,
      aux_sym_log_file_repeat1,
  [68] = 1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [73] = 1,
    ACTIONS(22), 1,
      sym_file_path,
  [77] = 1,
    ACTIONS(24), 1,
      anon_sym_SPACE,
  [81] = 1,
    ACTIONS(26), 1,
      anon_sym_SPACE,
  [85] = 1,
    ACTIONS(28), 1,
      anon_sym_RBRACK,
  [89] = 1,
    ACTIONS(30), 1,
      anon_sym_SPACE,
  [93] = 1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
  [97] = 1,
    ACTIONS(34), 1,
      anon_sym_COLON,
  [101] = 1,
    ACTIONS(36), 1,
      anon_sym_SPACE,
  [105] = 1,
    ACTIONS(38), 1,
      anon_sym_SPACE,
  [109] = 1,
    ACTIONS(40), 1,
      sym_line_number,
  [113] = 1,
    ACTIONS(42), 1,
      sym_day,
  [117] = 1,
    ACTIONS(44), 1,
      anon_sym_COLON2,
  [121] = 1,
    ACTIONS(46), 1,
      anon_sym_SPACE,
  [125] = 1,
    ACTIONS(48), 1,
      sym_message,
  [129] = 1,
    ACTIONS(50), 1,
      sym_time,
  [133] = 1,
    ACTIONS(52), 1,
      anon_sym_SPACE,
  [137] = 1,
    ACTIONS(54), 1,
      anon_sym_SPACE,
  [141] = 1,
    ACTIONS(56), 1,
      sym_year,
  [145] = 1,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 73,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 81,
  [SMALL_STATE(11)] = 85,
  [SMALL_STATE(12)] = 89,
  [SMALL_STATE(13)] = 93,
  [SMALL_STATE(14)] = 97,
  [SMALL_STATE(15)] = 101,
  [SMALL_STATE(16)] = 105,
  [SMALL_STATE(17)] = 109,
  [SMALL_STATE(18)] = 113,
  [SMALL_STATE(19)] = 117,
  [SMALL_STATE(20)] = 121,
  [SMALL_STATE(21)] = 125,
  [SMALL_STATE(22)] = 129,
  [SMALL_STATE(23)] = 133,
  [SMALL_STATE(24)] = 137,
  [SMALL_STATE(25)] = 141,
  [SMALL_STATE(26)] = 145,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 10, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_of_week, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 9, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_vlog(void) {
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
