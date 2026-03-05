#include "test_runner.h"
#include <vector>
#include <utility>

using namespace std;

template <typename T>
class Table {
public:
    Table(size_t rows, size_t cols) {
        Resize(rows, cols);
    }

    vector<T>& operator[](size_t i) {
        return data[i];
    }

    const vector<T>& operator[](size_t i) const {
        return data[i];
    }

    void Resize(size_t rows, size_t cols) {
        data.resize(rows);
        for (auto& row : data) {
            row.resize(cols);
        }
    }

    pair<size_t, size_t> Size() const {
        if (data.empty() || data[0].empty()) {
            return { 0, 0 };
        }
        return { data.size(), data[0].size() };
    }

private:
    vector<vector<T>> data;
};

void TestTable() {
    Table<int> t(1, 1);
    ASSERT_EQUAL(t.Size().first, 1u);
    ASSERT_EQUAL(t.Size().second, 1u);
    t[0][0] = 42;
    ASSERT_EQUAL(t[0][0], 42);
    t.Resize(3, 4);
    ASSERT_EQUAL(t.Size().first, 3u);
    ASSERT_EQUAL(t.Size().second, 4u);
}

int main() {
    TestRunner tr;
    RUN_TEST(tr, TestTable);
    return 0;
}