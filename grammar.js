module.exports = grammar({
  name: "forkjoin",
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
    label: $ => /[a-zA-Z][a-zA-Z0-9]*/,
    digit: $ => /[0-9][0-9]*/
  }
});
