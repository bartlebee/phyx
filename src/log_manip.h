#ifndef _LOG_MANIP_H_
#define _LOG_MANIP_H_

class LogManipulator {
private:
    
    string logtype_; // "parameter" or "tree"
    
    // sampling parameters. default to full (no burnin, retain all)
    int burnin_;
    int nthin_;
    
    int nrandom_;
    int seed_;
    
    bool count_; // just count (i.e. do not edit)
    bool verbose_;
    
    vector <int> indiv_totals_; // counts per file
    int ntotal_samples_;
    int num_files_;
    int num_cols_;
    
    vector <string> files_;
    istream* pios_;
    ostream* poos_;
    ifstream infilestr_;
    vector <string> parm_columns_;
    
    void count_parameter_samples ();
    void count_tree_samples ();
    void sample_parameters ();
    void sample_trees ();
    void write_reformatted_sample (string & sample, int & sample_num);
    
public:
    // not using this one
    LogManipulator(string const& logtype, vector <string> const& input_files,
        istream* pios, ostream* poos);
    LogManipulator(string const& logtype, vector <string> const& input_files,
        ostream* poos, bool const& verbose);
    void count ();
    void get_sample_counts ();
    void sample(int const& burnin, int const& nthin, int const& nrandom,
        int const& seed);
    
};

#endif /* _LOG_MANIP_H_ */
