package tree_sitter_forkjoin_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_forkjoin "github.com/tree-sitter/tree-sitter-forkjoin/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_forkjoin.Language())
	if language == nil {
		t.Errorf("Error loading Forkjoin grammar")
	}
}
