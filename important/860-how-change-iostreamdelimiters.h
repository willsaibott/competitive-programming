/**
 * struct word_splliter_t : std::ctype<char> {
  word_splliter_t() : std::ctype<char>(get_table()) {}
  static mask const* get_table() {
    static mask rc[table_size];
    rc[',']  = std::ctype_base::space;
    rc['.']  = std::ctype_base::space;
    rc[':']  = std::ctype_base::space;
    rc[';']  = std::ctype_base::space;
    rc['!']  = std::ctype_base::space;
    rc['?']  = std::ctype_base::space;
    rc['"']  = std::ctype_base::space;
    rc['(']  = std::ctype_base::space;
    rc[')']  = std::ctype_base::space;
    rc[' ']  = std::ctype_base::space;
    rc['\n'] = std::ctype_base::space;
    return &rc[0];
  }
};

int main() {
...
  cin.imbue(locale(cin.getloc(), new word_splliter_t{}));

*/