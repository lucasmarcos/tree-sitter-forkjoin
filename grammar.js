module.exports = grammar({
  name: "forkjoin",
  extras: $ => [
    /\s/,
    $.comment
  ],
  rules: {
    source_file: $ => repeat($._sttm),
    _sttm: $ => choice($._expr, $.def),
    _expr: $ => seq(
      choice(
        $.fork,
        $.join,
        $.assign,
        $.call
      ),
      ";"),
    fork: $ => seq("FORK", $.label),
    join: $ => seq("JOIN", $.label, ",", $.label, ",", $.label),
    assign: $ => seq($.label, "=", $.digit),
    call: $ => $.label,
    def: $ => seq($.label, ":"),
    label: $ => /[a-zA-Z_\\'][a-zA-Z_\\'0-9]*/,
    digit: $ => /[0-9][0-9]*/,
    comment: $ => seq("//", /.*/)
  }
});
