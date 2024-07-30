/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "vlog",

  rules: {
    log_file: ($) => repeat($.log_entry),

    log_entry: ($) =>
      seq(
        "[",
        $.log_level,
        " ",
        $.timestamp,
        "] ",
        $.file_path,
        ":",
        $.line_number,
        ": ",
        $.message,
      ),

    log_level: ($) =>
      choice("TRACE", "DEBUG", "INFO", "WARN", "ERROR", "FATAL"),

    timestamp: ($) =>
      seq($.day_of_week, " ", $.month, " ", $.day, " ", $.time, " ", $.year),

    day_of_week: ($) => choice("Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"),

    month: ($) =>
      choice(
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec",
      ),

    day: ($) => /\d{1,2}/,

    time: ($) => /\d{2}:\d{2}:\d{2}/,

    year: ($) => /\d{4}/,

    file_path: ($) => /[^:]+/,

    line_number: ($) => /\d+/,

    message: ($) => repeat1(choice(/./, "\n")),
  },
});
