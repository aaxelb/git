		DIFF_OPT_SET(options, SUBMODULE_LOG);
		DIFF_OPT_CLR(options, SUBMODULE_LOG);
	if (!strcmp(var, "diff.compactionheuristic")) {
		diff_compaction_heuristic = git_config_bool(var, value);
		return 0;
	}
		if (!regexec(word_regex, buffer->ptr + *begin, 1, match, 0)) {
		width = term_columns() - options->output_prefix_length;
	if (DIFF_OPT_TST(o, SUBMODULE_LOG) &&
			(!one->mode || S_ISGITLINK(one->mode)) &&
			(!two->mode || S_ISGITLINK(two->mode))) {
				one->oid.hash, two->oid.hash,
	diff_set_mnemonic_prefix(o, "a/", "b/");
	if (DIFF_OPT_TST(o, REVERSE_DIFF)) {
		a_prefix = o->b_prefix;
		b_prefix = o->a_prefix;
	} else {
		a_prefix = o->a_prefix;
		b_prefix = o->b_prefix;
	}

	if (hashcmp(sha1, ce->sha1) || !S_ISREG(ce->ce_mode))
	if (diff_compaction_heuristic)
		die("--name-only, --name-status, --check and -s are mutually exclusive");
				die("Option '--stat-width' requires a value");
				die("Option '--stat-name-width' requires a value");
				die("Option '--stat-graph-width' requires a value");
				die("Option '--stat-count' requires a value");
	else if (!strcmp(arg, "--compaction-heuristic"))
	else if (!strcmp(arg, "--no-compaction-heuristic"))
		DIFF_OPT_SET(options, SUBMODULE_LOG);