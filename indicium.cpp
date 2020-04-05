{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 8,
   "metadata": {},
   "outputs": [
    {
     "ename": "SyntaxError",
     "evalue": "invalid syntax (<ipython-input-8-cae2b2c7f6b9>, line 3)",
     "output_type": "error",
     "traceback": [
      "\u001b[1;36m  File \u001b[1;32m\"<ipython-input-8-cae2b2c7f6b9>\"\u001b[1;36m, line \u001b[1;32m3\u001b[0m\n\u001b[1;33m    using namespace std;\u001b[0m\n\u001b[1;37m                  ^\u001b[0m\n\u001b[1;31mSyntaxError\u001b[0m\u001b[1;31m:\u001b[0m invalid syntax\n"
     ]
    }
   ],
   "source": [
    "#include <bits/stdc++.h>\n",
    "\n",
    "using namespace std;\n",
    "\n",
    "int sqr[50][50], n, k, t;\n",
    "bool row_safe[50][50], col_safe[50][50], solved;\n",
    "\n",
    "void solver(int row, int col, int m) {\n",
    "    if (row == n && col == n + 1 && m == k && !solved) {\n",
    "        solved = true;\n",
    "        cout << \"Case #\" << t << \": \" << \"POSSIBLE\\n\";\n",
    "        for (int i = 1; i <= n; ++i) {\n",
    "            for (int j = 1; j <= n; ++j) {\n",
    "                cout << sqr[i][j] << \" \";\n",
    "            }\n",
    "            cout << \"\\n\";\n",
    "        }\n",
    "        return;\n",
    "    } else if (row > n) {\n",
    "        return;\n",
    "    } else if (col > n) {\n",
    "        solver(row + 1, 1, m);\n",
    "    }\n",
    "    for (int i = 1; i <= n && !solved; ++i) {\n",
    "        if (!row_safe[row][i] && !col_safe[col][i]) {\n",
    "            row_safe[row][i] = col_safe[col][i] = true;\n",
    "            if (row == col) {\n",
    "                m += i;\n",
    "            }\n",
    "            sqr[row][col] = i;\n",
    "\n",
    "            solver(row, col + 1, m);\n",
    "\n",
    "            row_safe[row][i] = col_safe[col][i] = false;\n",
    "            if (row == col) {\n",
    "                m -= i;\n",
    "            }\n",
    "            sqr[row][col] = 0;\n",
    "        }\n",
    "    }\n",
    "}\n",
    "\n",
    "int main() {\n",
    "    int T;\n",
    "    scanf(\" %d\", &T);\n",
    "    for (t = 1; t <= T; ++t) {\n",
    "        scanf(\" %d %d\", &n, &k);\n",
    "        solver(1, 1, 0);\n",
    "        if (!solved) {\n",
    "            cout << \"Case #\" << t << \": \" << \"IMPOSSIBLE\\n\";\n",
    "        }\n",
    "        solved = false;\n",
    "    }\n",
    "    return 0;\n",
    "}"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.7.4"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}
