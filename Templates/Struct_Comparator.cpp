struct node {
    int idx, pnt, penalty;
};

bool comp(node a, node b) {
    if (a.pnt != b.pnt) return a.pnt > b.pnt; // descending order based on pnt.
    else if (a.penalty != b.penalty) return a.penalty < b.penalty; // asscending order based on penalty

    return a.idx < b.idx; // asscending order based on index.
}    
