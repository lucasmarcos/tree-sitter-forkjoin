from unittest import TestCase

import tree_sitter, tree_sitter_forkjoin


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_forkjoin.language())
        except Exception:
            self.fail("Error loading Forkjoin grammar")
