#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  aux_sym_message_token1 = 36,
  anon_sym_LF = 37,
  sym_log_file = 38,
  sym_log_entry = 39,
  sym_log_level = 40,
  sym_timestamp = 41,
  sym_day_of_week = 42,
  sym_month = 43,
  sym_message = 44,
  aux_sym_log_file_repeat1 = 45,
  aux_sym_message_repeat1 = 46,
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
  [anon_sym_INFO] = "INFO ",
  [anon_sym_WARN] = "WARN ",
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
  [aux_sym_message_token1] = "message_token1",
  [anon_sym_LF] = "\n",
  [sym_log_file] = "log_file",
  [sym_log_entry] = "log_entry",
  [sym_log_level] = "log_level",
  [sym_timestamp] = "timestamp",
  [sym_day_of_week] = "day_of_week",
  [sym_month] = "month",
  [sym_message] = "message",
  [aux_sym_log_file_repeat1] = "log_file_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
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
  [aux_sym_message_token1] = aux_sym_message_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_log_file] = sym_log_file,
  [sym_log_entry] = sym_log_entry,
  [sym_log_level] = sym_log_level,
  [sym_timestamp] = sym_timestamp,
  [sym_day_of_week] = sym_day_of_week,
  [sym_month] = sym_month,
  [sym_message] = sym_message,
  [aux_sym_log_file_repeat1] = aux_sym_log_file_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
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
  [aux_sym_message_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_log_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat1] = {
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
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        ':', 69,
        'A', 47,
        'D', 16,
        'E', 28,
        'F', 10,
        'I', 21,
        'J', 32,
        'M', 33,
        'N', 46,
        'O', 36,
        'S', 34,
        'T', 25,
        'W', 13,
        '[', 66,
        ']', 2,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(3);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(11);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'U') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 55:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 56:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 57:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '[') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_FATAL);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_Mon);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Tue);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Wed);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Thu);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Fri);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Sat);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Sun);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_Jan);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Feb);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Mar);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Apr);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Jun);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Jul);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Aug);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Sep);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Oct);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Nov);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_Dec);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_day);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_day);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_day);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_day);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_year);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_file_path);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_line_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_line_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_message_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '[') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\n') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
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
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 64},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 0},
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
    [sym_log_file] = STATE(21),
    [sym_log_entry] = STATE(9),
    [aux_sym_log_file_repeat1] = STATE(9),
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
    STATE(12), 1,
      sym_day_of_week,
    STATE(26), 1,
      sym_timestamp,
    ACTIONS(9), 7,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
  [34] = 2,
    STATE(13), 1,
      sym_log_level,
    ACTIONS(11), 6,
      anon_sym_TRACE,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_FATAL,
  [46] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_message_repeat1,
    ACTIONS(17), 2,
      aux_sym_message_token1,
      anon_sym_LF,
  [60] = 4,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_message_repeat1,
    ACTIONS(24), 2,
      aux_sym_message_token1,
      anon_sym_LF,
  [74] = 3,
    STATE(6), 1,
      aux_sym_message_repeat1,
    STATE(10), 1,
      sym_message,
    ACTIONS(26), 2,
      aux_sym_message_token1,
      anon_sym_LF,
  [85] = 3,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    STATE(8), 2,
      sym_log_entry,
      aux_sym_log_file_repeat1,
  [96] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_log_entry,
      aux_sym_log_file_repeat1,
  [107] = 1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [112] = 1,
    ACTIONS(37), 1,
      sym_file_path,
  [116] = 1,
    ACTIONS(39), 1,
      anon_sym_SPACE,
  [120] = 1,
    ACTIONS(41), 1,
      anon_sym_SPACE,
  [124] = 1,
    ACTIONS(43), 1,
      anon_sym_COLON,
  [128] = 1,
    ACTIONS(45), 1,
      anon_sym_SPACE,
  [132] = 1,
    ACTIONS(47), 1,
      anon_sym_SPACE,
  [136] = 1,
    ACTIONS(49), 1,
      sym_line_number,
  [140] = 1,
    ACTIONS(51), 1,
      sym_day,
  [144] = 1,
    ACTIONS(53), 1,
      anon_sym_COLON2,
  [148] = 1,
    ACTIONS(55), 1,
      anon_sym_SPACE,
  [152] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [156] = 1,
    ACTIONS(59), 1,
      sym_time,
  [160] = 1,
    ACTIONS(61), 1,
      anon_sym_SPACE,
  [164] = 1,
    ACTIONS(63), 1,
      anon_sym_SPACE,
  [168] = 1,
    ACTIONS(65), 1,
      anon_sym_SPACE,
  [172] = 1,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
  [176] = 1,
    ACTIONS(69), 1,
      sym_year,
  [180] = 1,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 107,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 132,
  [SMALL_STATE(17)] = 136,
  [SMALL_STATE(18)] = 140,
  [SMALL_STATE(19)] = 144,
  [SMALL_STATE(20)] = 148,
  [SMALL_STATE(21)] = 152,
  [SMALL_STATE(22)] = 156,
  [SMALL_STATE(23)] = 160,
  [SMALL_STATE(24)] = 164,
  [SMALL_STATE(25)] = 168,
  [SMALL_STATE(26)] = 172,
  [SMALL_STATE(27)] = 176,
  [SMALL_STATE(28)] = 180,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 10, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_of_week, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 9, 0, 0),
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
